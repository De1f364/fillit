/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_popstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 00:32:00 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/19 01:03:53 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_popstk(t_stack *stk)
{
	int element;

	if ((stk->top) > 0)
	{
		element = stk->data[stk->top - 1];
		return (element);
	}
	else
	{
		ft_putstr("Stack is empty!");
		return (0);
	}
}
