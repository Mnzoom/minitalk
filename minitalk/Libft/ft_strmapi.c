/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:52:14 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:11:37 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char *res;
   
    res = malloc((ft_strlen(s) + 1) * sizeof(char));
    if(!s)
        return(NULL);
    i = 0;
    while(i < ft_strlen)
    {
        res[i] = (*f)(i, s[i]);
        i++;
    }
    res[i] = 0;
    return(res);
}