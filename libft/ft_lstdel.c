/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 20:40:39 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/18 20:55:30 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;
	t_list **ptr;

	ptr = alst;
	while (*ptr != NULL)
	{
		next = (*ptr)->next;
		ft_lstdelone(ptr, del);
		*ptr = next;
	}
}
