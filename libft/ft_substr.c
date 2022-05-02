/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:55:28 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/21 12:23:09 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*tmp;

	if (s == (void *)0)
		return ((void *)0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == ((void *)0))
		return ((void *)0);
	tmp = str;
	if (start < ft_strlen(s))
	{
		while (start-- != 0)
			s++;
		while (len-- != 0)
			*str++ = *s++;
	}
	*str = '\0';
	return (tmp);
}
