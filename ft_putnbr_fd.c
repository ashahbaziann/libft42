/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:09:23 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/02/05 19:23:28 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (num >= 10)
	{
		ft_putnbr_fd((num / 10), fd);
		ft_putchar_fd(((num % 10) + '0'), fd);
	}
	if (num >= 1 && num <= 9)
		ft_putchar_fd ((num + '0'), fd);
}
