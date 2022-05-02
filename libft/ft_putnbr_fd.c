/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:54:26 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/20 17:12:46 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	base;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		base = 1;
		while ((n / base) != 0)
			base = base * 10;
		base = base / 10;
		while (base != 0)
		{
			ft_putchar_fd((n / base) + '0', fd);
			n = n % base;
			base = base / 10;
		}
	}
}
