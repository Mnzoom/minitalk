/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:27:16 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:11:30 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    unsigned int i;
    char *res;
    char b;

    b = (char) c;
    res = NULL
    i = 0;
    while (str[i])
    {
        if(str[i] == b)
            res = (char *) &str[i]
        i++;
    }
    if (str[i] == b)
        res = (char *) &str[i];
    return (res);
    
}