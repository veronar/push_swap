
#include "push_swap.h"

void	ft_500_sort(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*stack_a;
	int		i;
	int		range;

	i = 1;
	range = 0;
	while (*head_a != NULL)
	{
		range = range + 44;
		while (i <= range)
		{
			stack_a = *head_a;
			if (stack_a == NULL)
				break ;
			if (stack_a->norm <= range)
			{
				ft_push_pb(head_a, head_b);
				i++;
			}
			else 
				ft_push_rota(head_a);
		}
	}
	i--;
	ft_pushback_b(head_a, head_b, i, range);
}