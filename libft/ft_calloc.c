/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:49:43 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/16 16:50:19 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*arr;

	arr = malloc(num * size);
	if (arr == ((void *)0))
		return ((void *)0);
	ft_memset(arr, 0, num * size);
	return (arr);
}
