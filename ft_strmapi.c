/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:16:47 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/02/02 13:45:37 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	result = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		result[i] = (*f)(i, *s);
		s++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
