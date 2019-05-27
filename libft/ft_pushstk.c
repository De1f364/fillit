/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushstk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 00:17:46 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/19 01:02:38 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pushstk(t_stack *stk, int i)
{
	if (stk->top < MAX)
	{
		stk->data[stk->top] = i;
		stk->top++;
	}
	else
		ft_putstr("Full Stack!");
}
