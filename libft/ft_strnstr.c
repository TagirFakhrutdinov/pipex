/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:55:10 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/21 16:03:19 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*buf;

	if (*little == 0)
		return ((char *)big);
	len = ft_strlen(little);
	i = 0;
	buf = (char *)big;
	while (big[i] != '\0' && i < n)
	{
		j = 0;
		if (ft_strncmp(&big[i], &little[j], len) == 0 && i + len <= n)
			return (buf + i);
		i++;
	}
	return ((void *)0);
}
