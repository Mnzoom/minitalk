/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:27:58 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 16:36:24 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;
    
    str1 = (unsigned char) *s1;
    str2 = (unsigned char) *s2;
    i = 0;
    while(i < n)
    {
        if(unsigned char) str1[i] != (unsigned char) str2[i]
            return ((unsigned char) str1[i] - (unsigned char) str2[i]);
    }
    return (0);
}