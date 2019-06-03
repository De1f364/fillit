/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:31:33 by neddison          #+#    #+#             */
/*   Updated: 2019/04/20 20:12:45 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		del(void *content, size_t content_size)
{
	if (!(content))
		return ;
	free(content);
	content = NULL;
	content_size = 0;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *prev;

	prev = NULL;
	if (!lst || !f)
		return (NULL);
	prev = f(lst);
	new = prev;
	lst = lst->next;
	while (lst)
	{
		if (!(new->next = (*f)(lst)))
		{
			ft_lstdel(&prev, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (prev);
}
