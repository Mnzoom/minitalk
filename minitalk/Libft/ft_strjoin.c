/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:36:56 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:11:44 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    int i;
    int j;
    char    dst;

    i = 0;
    j = 0;
    dst = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char));
    if(!dst)
        return(NULL);
    while(s1[i])
        dst[j++] = s1[i++]; 
    i = 0;
    while(s2[i])
        dst[j++] = s2[i++];
    dst[j] = 0;
    return(dst);
    
    
    
    
}