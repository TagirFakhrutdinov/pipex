/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:55:05 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/16 16:55:44 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;

	arr1 = (unsigned char *)str1;
	arr2 = (unsigned char *)str2;
	while ((n != 0) && (*arr1 != '\0' || *arr2 != '\0'))
	{
		if (*arr1 != *arr2)
			return ((int)(*arr1 - *arr2));
		arr1++;
		arr2++;
		n--;
	}
	return (0);
}
