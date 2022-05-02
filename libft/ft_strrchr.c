/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:55:21 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/16 16:55:44 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (*str != '\0')
		str++;
	if ((char)c == '\0')
		return ((char *)str);
	str--;
	while (len != 0)
	{
		if (*str == ((char)c))
			return ((char *)str);
		str--;
		len--;
	}
	return ((void *) 0);
}
