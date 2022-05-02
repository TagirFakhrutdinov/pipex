/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:55:25 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/20 16:21:06 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		len;

	if (s1 == (void *)0)
		return ((void *)0);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	while (len != i && ft_strrchr(set, s1[len]))
		len--;
	len = len - i + 1;
	str = ft_substr(s1, i, len);
	return (str);
}
