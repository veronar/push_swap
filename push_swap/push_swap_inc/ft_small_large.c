
#include "push_swap.h"

/*
** ft_smallest: finds the node with the smallest integer in it.
** returns pointer to said node.
*/

t_dlist		*ft_smallest(t_dlist **head_a)
{
	t_dlist	*ret;
	t_dlist	*temp;

	ret = *head_a;
	temp = ret;
	while (ret != NULL)
	{
		if (ret->n < temp->n)
			temp = ret;
		ret = ret->next;
	}
	return (temp);
}

/*
** ft_largest: finds the node with the largest integer in it.
** returns pointer to said node.
*/

t_dlist		*ft_largest(t_dlist **head)
{
	t_dlist	*ret;
	t_dlist	*temp;

	ret = *head;
	temp = ret;
	while (ret != NULL)
	{
		if (ret->n > temp->n)
			temp = ret;
		ret = ret->next;
	}
	return (temp);
}

/*
** ft_large_pos: finds the position of the node with the largest integer
** in it, returns the int value of the its position in the list.
*/

int		ft_large_pos(t_dlist **head)
{
	t_dlist	*start;
	t_dlist	*large;
	int		pos;
	
	start = *head;
	large = ft_largest(head);
	pos = 1;
	while (start != NULL)
	{
		if (start->n == large->n)
			break ;
		pos++;
		start = start->next;
	}
	return (pos);
}
