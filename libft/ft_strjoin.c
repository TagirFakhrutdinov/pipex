/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:54:47 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/21 12:26:21 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	char	*tmp;
	int		len1;
	int		len2;

	if (s1 == (void *)0 || s2 == (void *)0)
		return ((void *)0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == ((void *)0))
		return ((void *)0);
	tmp = new_str;
	while (*s1 != '\0')
		*new_str++ = *s1++;
	while (*s2 != '\0')
		*new_str++ = *s2++;
	*new_str = '\0';
	return (tmp);
}
