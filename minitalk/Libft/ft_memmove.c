/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:27:43 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:12:14 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *c_src;
    char    *c_dst;
    size_t    i;

    if (!dst && !src)
        return (NULL);
    c_src = (char *) src;
    c_dst = (char *) dst;
    i = 0;
    if (c_dst > c_src)
        while (len-- > 0)
            c_dst[len] = c_src[len];
    else
    {
        while (i++ < len)
            c_dst[i] = c_src[i];
    }
    return (dst);
}