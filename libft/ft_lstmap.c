/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:00:43 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/22 17:37:55 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (lst == (void *)0)
		return ((void *)0);
	new_elem = ft_lstnew(f(lst -> content));
	if (new_elem == (void *)0)
	{
		ft_lstdelone(new_elem, del);
		return ((void *)0);
	}
	new_lst = new_elem;
	lst = lst -> next;
	while (lst != (void *)0)
	{
		new_elem = ft_lstnew(f(lst -> content));
		if (new_elem == (void *)0)
			ft_lstdelone(new_elem, del);
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst -> next;
	}
	return (new_lst);
}
