/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:51:16 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/02/06 16:53:40 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_size;
	size_t	src_size;

	if (!dst && !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	src_size = ft_strlen(src);
	dest_size = ft_strlen(dst);
	if (dst && dest_size > dstsize)
		return (dstsize + src_size);
	i = 0;
	j = dest_size;
	while (src[i] && j < dstsize - 1)
	{
		*(dst + j) = *(src + i);
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dest_size + src_size);
}
