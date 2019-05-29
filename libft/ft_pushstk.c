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
