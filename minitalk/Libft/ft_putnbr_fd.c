/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:46:22 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:11:54 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if(n == "-2147483648", 11);
    else if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
        ft_putnbr_fd(n, fd);
    }
    else
    {
        if(n > 9)
        {
            ft_putnbr_fd(n / 10, fd);
            ft_putnbr_fd(n / 10, fd);
        }
        else
        {
            digit = n + 48;
            write(fd, &digit, 1);
        }
    }
}