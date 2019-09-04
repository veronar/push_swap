
#include "push_swap.h"

/*
** ft_addnorms: adds the norm value to each number based on the integer value
*/

void		ft_addnorms(t_dlist **head_a)
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

/*int		ft_norm_pos(t_dlist **head_a, int norm)
{
	t_dlist	*start;
	int		pos;

	start = *head_a;
	pos = 0;
	while (start != NULL)
	{
		if (start->norm == norm)
			break ;
		pos++;
		start = start->next;
	}
	return (pos);
}*/

int		ft_normlargepos(t_dlist **head, int large)
{
	t_dlist	*start;
	int		pos;
	int		i;

	start = *head;
	pos = 0;
	i = 0;
	while (start != NULL)
	{
		if (start->norm == large)
		{
			pos = i;
			break ;
		}
		start = start->next;
		i++;
	}
	return (pos);
}

/*
t_dlist		*ft_normlarge(t_dlist **head, int large)
{
	t_dlist	*start;
	int		pos;

	start= *head;
	pos = 1;
	while (start != NULL)
	{
		if (start->norm == large)
			break ;
		start = start->next;
		pos++;
	}
	return (start);
}*/