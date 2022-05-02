/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:54:15 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/16 16:55:44 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*arr;

	arr = (unsigned char *)ptr;
	while (num != 0)
	{
		*arr = (unsigned char)value;
		arr++;
		num--;
	}
	return (ptr);
}
