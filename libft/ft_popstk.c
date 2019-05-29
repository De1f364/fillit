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
