#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *tmp2;
	
	tmp = *alst;
	tmp2 = *alst;
	if (alst && del)
	{
		while (tmp2)
		{
			tmp = tmp->next;
			del(tmp2->content, tmp2->content_size);
			free(tmp2);
			tmp2 = tmp;
		}
		*alst = NULL;
	}
}
