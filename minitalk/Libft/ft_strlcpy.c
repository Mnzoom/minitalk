/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:34:40 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 13:11:41 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  src_len;
    src_len = ft_strlen(src);
    if (src_len + 1 < dstsize)
        ft_memcpy(dst, src, src_len + 1)
    else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = 0;
    }
    return (src_len);
}
