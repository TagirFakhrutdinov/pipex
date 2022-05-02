/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:54:00 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/16 16:55:44 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	while (n != 0)
	{
		if (*(unsigned char *)arr == (unsigned char)c)
			return ((void *)arr);
		arr++;
		n--;
	}
	return ((void *)0);
}
