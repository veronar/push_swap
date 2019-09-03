
#include "push_swap.h"

int		ft_norm_pos(t_dlist **head_a, int norm)
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
}

int		ft_normlargepos(t_dlist **head, int large)
{
	t_dlist	*start;
	int		pos;
    int     i;

	start= *head;
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
}