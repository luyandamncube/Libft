/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 16:36:27 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/14 16:56:51 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*head;

	temp = f(lst);
	head = temp;
	lst = lst->next;
	while (lst)
	{
		temp->next = f(lst);
		temp = temp->next;
		lst = lst->next;
	}
	return (head);
}
