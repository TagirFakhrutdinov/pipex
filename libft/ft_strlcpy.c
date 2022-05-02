/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:29:31 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/18 17:35:00 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lim;

	lim = ft_strlen(src);
	if (size > 0)
	{
		while (*src != '\0' && (size - 1) != 0)
		{
			*dst = *src;
			dst++;
			src++;
			size--;
		}
		*dst = '\0';
	}
	return (lim);
}
