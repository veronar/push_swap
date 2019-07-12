
#include "./libft/libft.h"

int		ft_error(void)
{
	ft_putendl("Error");
	retunr (-1);
}

void	ft_fill_stack(int **stack_size, char **av, int ac) /*pointer logic is flawed here*/
{
	//variables
	//int		args;
	int		temp;
	
	temp = 0;
	while (ac > 0)
	{
		//check for duplicates
		//if is_digit? How do we check if there is only numbers?
		//check values, then malloc for number
		//read value, then comapre to all in list (nodes) and if not there then add a node for it
		// else error
		if (!(temp = atoi(av[ac])))
			return (ft_error);
		*stack_a = temp;
		ac--;
	}
}

void	ft_read_operations()
{
	char *line;

	while (get_next_line(1, &line))
	{
		if (strcmp(line, "sa") == 0)
			//swap a - swap the first 2 elements at the top of stack a. Do nothing if there 
			//is only one or no elements).
		else if (strcmp(line, "sb") == 0)
			//swap b - swap the first 2 elements at the top of stack b. Do nothing if there
			//is only one or no elements).
		else if (strcmp(line, "ss") == 0)
			//sa & sb at the same time
		else if (strcmp(line, "pa") == 0)
			//push a - take the first element at top of b and put it at top of a
			//do nothing if b is empty
		else if (strcmp(line, "pb") == 0)
			//push b - take the first element at top of a and put it at top of b
			//do nothing if a is empty
		else if (strcmp(line, "ra") == 0)
			//rotate a - shift up all elements of stack a by 1, ie first elem becomes last
		else if (strcmp(line, "rb") == 0)
			//rotate b - shift up all elements of stack b by 1, ie first elem becomes last
		else if (strcmp(line, "rr") == 0)
			//ra & rb at the same time
		else if (strcmp(line, "rra") == 0)
			//reverse rotate a - shift down all elements of stack a by 1, ie last elem becomes first
		else if (strcmp(line, "rrb") == 0)
			//reverse rotate b - shift down all elements of stack b by 1, ie last elem becomes first
		else if (strcmp(line, "rrr") == 0)
			//rra and rrb at the same time
		else 
			return (ft_error);
	}
}

int		ft_check_sort()
{
	//how to check for duplicates?

	if (stack_a == sorted && stack_b == NULL / empty)
	{
		ft_putendl("OK");
		return (1);
	}
	else 
	{
		ft_putendl("KO");
		return (0);
	}
}

int		main(int ac, char **av)
{
	int		fd;
	int		stack_size;
	int		**stack_a;

	if (ac == 1)
		return (0);
	else
		stack_size = ac - 1;
	return (ft_check_sort());
}
