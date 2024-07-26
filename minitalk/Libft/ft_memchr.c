/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:28:01 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:12:20 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    unsigned char b;

    str = (unsigned char *) str;
    b (unsigned char) bb;
    i = 0;
    while (i < n)
    {
        if(str[i] == bb)
        return (( void *) &str[i]);
    i++;
    }
    return (NULL);
}
