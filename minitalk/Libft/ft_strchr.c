/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:27:34 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:16:28 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    char            b;
    b = (char) c;
    i = 0;
    while (s[i])
    {
        if(s[i] == b)
            return ((char *) &s[i])
        i++;
    }
    if(s[i] == b)
        return ((char *) &s[i]);
    return (NULL);
}
