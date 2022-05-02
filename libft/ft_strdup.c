/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:54:41 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/16 17:15:23 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;
	char	*tmp;
	size_t	len;

	len = ft_strlen(str);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == ((void *)0))
		return ((void *)0);
	tmp = copy;
	while (*str != '\0')
	{
		*copy = *str;
		copy++;
		str++;
	}
	*copy = '\0';
	return (tmp);
}
