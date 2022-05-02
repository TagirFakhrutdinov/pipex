/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:54:11 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/16 17:10:25 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *copy, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*arr_one;
	unsigned char	*arr_two;

	if (copy == ((void *)0) && src == ((void *)0))
		return ((void *)0);
	i = 0;
	arr_one = (unsigned char *)copy;
	arr_two = (unsigned char *)src;
	if (arr_two < arr_one)
	{
		while (++i <= num)
			arr_one[num - i] = arr_two[num - i];
	}
	else
	{
		while (num-- != 0)
			*(arr_one++) = *(arr_two++);
	}
	return (copy);
}
