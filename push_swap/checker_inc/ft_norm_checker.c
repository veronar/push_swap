
#include "checker.h"

/*
** ft_lst_size: get size of list of arguments given
*/

int			ft_lst_size(t_dlist **head)
{
	int	len;
	t_dlist	*lst;

	len = 0;
	if (*head == NULL)
		return (0);
	lst = *head;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*
** ft_addnorms: adds the norm value to each number based on the integer value
*/

void		ft_addnorms_checker(t_dlist **head_a)
{
	t_dlist	*start;
	t_dlist	*second;
	int		norm;

	start = *head_a;
	while (start != NULL)
	{
		norm = ft_lst_size(head_a);
		start->norm = norm;
		second = *head_a;
		while (second != NULL)
		{
			if (start->n < second->n)
				start->norm--;
			second = second->next;
		}
		start = start->next;
	}
}