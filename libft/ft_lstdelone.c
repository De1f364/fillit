#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list **ptr;

	ptr = alst;
	del((*ptr)->content, (*ptr)->content_size);
	free(*ptr);
	*ptr = NULL;
}
