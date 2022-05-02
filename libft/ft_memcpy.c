/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:54:08 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/16 16:55:44 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *copy, const void *src, size_t num)
{
	unsigned char	*arr;

	if (copy == ((void *)0) && src == ((void *)0))
		return ((void *)0);
	arr = (unsigned char *)copy;
	while (num != 0)
	{
		*arr = *(unsigned char *)src;
		arr++;
		src++;
		num--;
	}
	return (copy);
}
