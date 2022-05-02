/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:54:44 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/20 16:34:04 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (s == (void *)0 || f == (void *)0)
		return ;
	i = 0;
	while (*s != '\0')
	{
		f(i, s);
		i++;
		s++;
	}
}
