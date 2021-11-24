/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:31:05 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 17:31:12 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	
	if (!lst || !f || !del)
		return ((t_list *)NULL);
	new_lst = ft_lstnew(f(lst->content));
	temp = new_lst;
	while (lst->next)
	{
		lst = lst->next;
		if (!(temp->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lst, del);
			return ((t_list *)NULL);
		}
		temp = temp->next;
	}
	temp->next = NULL;
	return (new_lst);
}
