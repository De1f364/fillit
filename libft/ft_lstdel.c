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
