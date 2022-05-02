/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:53:56 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/24 12:40:13 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_len(int n)
{
	long int	len;
	long int	base;

	len = 1;
	base = 10;
	while ((n / base) != 0)
	{
		base = base * 10;
		len++;
	}
	return (len);
}

static char	*ft_special_case(int n)
{
	char	*tmp;

	if (n == -2147483648)
		tmp = ft_strdup("-2147483648");
	else
		tmp = ft_strdup("0");
	return (tmp);
}

static void	ft_putnumbr(char *str, int n, int flag)
{
	long int	base;

	base = 1;
	if (flag == 1)
		*str++ = '-';
	while ((n / base) != 0)
		base = base * 10;
	base = base / 10;
	while (base != 0)
	{
		*str++ = ((n / base) + '0');
		n = n % base;
		base = base / 10;
	}
	*str = '\0';
}

char	*ft_itoa(int n)
{
	long int	len;
	char		*str;
	char		*tmp;
	int			flag;

	if (n == -2147483648 || n == 0)
		tmp = ft_special_case(n);
	else
	{
		flag = 0;
		if (n < 0)
		{
			n = -n;
			flag = 1;
		}
		len = ft_len(n);
		if (flag == 1)
			len++;
		str = (char *)malloc((len + 1) * sizeof(char));
		if (str == ((void *)0))
			return ((void *)0);
		tmp = str;
		ft_putnumbr(str, n, flag);
	}
	return (tmp);
}
