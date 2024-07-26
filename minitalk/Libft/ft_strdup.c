/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:41:39 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:11:47 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char *dst;
    size_t i;
    dst = (char *) malloc(ft_strlen(s1) + 1)
    if (!dst)
        return(NULL);
    i = 0;
    while (s1[i])
    {
        dst[i] = s1[i];
        i++;
    }
    dst[i] = 0;
    return (dst);
}