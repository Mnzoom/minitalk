/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:00:48 by marvin            #+#    #+#             */
/*   Updated: 2024/07/26 17:00:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "Libft/libft.h"

static void action(int sig, siginfo_t *info, void *context)
{
    static int i;
    static pid_t client_pid;
    static unsigned char    c;

    i = 0;
    client_pid = 0;
    c = 0;

    (void)context;
    if (!client_pid)
        client_pid = info->si_pid;
    c |= (sig == SIGUSR2);
    if (++i == 8)
    {
        i = 0;
        if (!c)
        {
            kill(client_pid, SIGURS2);
            client_pid = 0;
            return;
        }
        ft_putchar_fd(c, 1);
        c = 0;
        kill(client_pid, SIGUSR1);
    }
    else
        c <<= 1;
}

int main(void)
{
    struct sigaction    s_sigaction;

    ft_putstr_fd("Server PID: ", 1);
    ft_putnbr_fd(getpid(), 1);
    ft_putchar_fd('\n', 1);
    s_sigaction.sa_sigaction = action;
    s_sigaction.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1, &s_sigaction, 0);
    sigaction(SIGUSR2, &s_sigaction, 0);
    while (1)
        pause();
    return (0); 
    

    
}