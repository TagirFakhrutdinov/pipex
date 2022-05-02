/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:55:02 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/20 16:26:41 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*tmp;
	int				len;
	unsigned int	i;

	if (s == (void *)0 || f == (void *)0)
		return ((void *)0);
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == ((void *)0))
		return ((void *)0);
	tmp = str;
	i = 0;
	while (*s != '\0')
	{
		*str = f(i, *s);
		i++;
		str++;
		s++;
	}
	*str = '\0';
	return (tmp);
}
