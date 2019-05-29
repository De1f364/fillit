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
