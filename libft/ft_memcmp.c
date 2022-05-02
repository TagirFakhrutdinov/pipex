/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:54:04 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/16 17:13:45 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;

	arr1 = (unsigned char *)s1;
	arr2 = (unsigned char *)s2;
	while (n != 0)
	{
		if (*arr1 != *arr2)
			return ((int)(*arr1 - *arr2));
		arr1++;
		arr2++;
		n--;
	}
	return (0);
}
