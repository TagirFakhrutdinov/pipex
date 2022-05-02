/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:51:10 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/22 15:03:46 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	len;

	len = ft_lstsize(lst);
	if (lst == (void *)0)
		return ((void *)0);
	while (len - 1 != 0)
	{
		lst = lst -> next;
		len--;
	}
	return (lst);
}
