/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 22:00:01 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/18 22:48:36 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*ptr;
	t_list		*list;

	if (!lst)
		return (NULL);
	list = f(lst);
	ptr = list;
	while (lst->next)
	{
		lst = lst->next;
		if ((list->next = f(lst)) == NULL)
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (ptr);
}
