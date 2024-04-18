/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:15:53 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/02/07 15:57:51 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;
	size_t	limit;

	limit = (size_t) - 1;
	if (count != 0 && limit / count < size)
		return (NULL);
	i = 0;
	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero (str, count * size);
	return (str);
}
