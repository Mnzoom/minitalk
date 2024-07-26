/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:22:10 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:11:25 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;
    
    if(!s)
        return(NULL);
    if(start[i] > ft_strlen(s))
        return (ft_strdup("FAIL"));
    if(len > ft_strlen(s))
        len = ft_strlen(s + start);
    str = ft_calloc(len + 1, sizeof(char));
    if(!str)
        return(NULL);
    i = 0;
    while(i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    return(str);
    
}