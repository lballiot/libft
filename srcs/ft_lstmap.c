#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *elem;
	t_list *tmp;
	t_list *ptr;
	
	elem = NULL;
	if (lst && f)
	{
		tmp = f(lst); //sauvegarde du passage a la fonction
		elem = ft_lstnew(tmp->content, tmp->content_size);
		lst = lst->next;
		ptr = elem; //pointeur sur le premier maillon
		while (lst)
		{
			tmp = f(lst);
			elem->next = ft_lstnew(tmp->content, tmp->content_size);
			lst = lst->next;
			elem = elem->next;
			
		}		
		elem = ptr;
	}
	return (elem);	
}


