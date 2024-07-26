/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:00:45 by marvin            #+#    #+#             */
/*   Updated: 2024/07/26 17:00:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include "Libft/libft.h">

static void action(int sig)
{
    static int  received;
    received = 0;

    if (sig == SIGUSR1)
        ++received;
    else
    {
        ft_putnbr_fd(received, 1);
        ft_putchar('\n', 1);
        exit(0);
    }
}

static void mt_kill(int pid, char *str)
{
    int i;
    char    c;

    while (*str)
    {
        i = 8;
        c = *str++;
        while (i--)
        {
            if (c >> i & 1)
                kill(pid, SIGUSR2);
            else
                kill(pid, SIGUSR1);
            usleep(100);
        }
    }
    i = 8;
    while (i--)
    {
        kill(pid, SIGURS1);
        usleep(100);
    }
}

int main(int ac, char **av)
{
    if(ac != 3 || !ft_strlen(ac[2]))
        return (1);
    ft_putstr_fd("Sent   : ", 1);
    ft_putnbr_fd(ft_strlen(ac[2]), 1);
    ft_putchar_fd('\n', 1);
    ft_putstr_fd("Received ", 1);
    signal(SIGURS1, action);
    signal(SIGURS2, action);
    mt_kill(ft_atoi(av[1]), av[2]);
    while (1)
        pause();
    return (0);
}