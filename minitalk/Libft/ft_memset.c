/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:27:38 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:12:11 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *temp;
    tmp = (unsigned char *) b;
    while (len > 0)
    {
        *(temp++) = (unsigned char) c;
        len --;
    }
    return (b); 
}