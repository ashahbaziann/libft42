/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:25:24 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/02/06 16:58:15 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*((unsigned char *)(dst) + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}
