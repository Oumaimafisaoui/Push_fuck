/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:46:51 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/31 00:16:26 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stacks(int l)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->top = -1;
	stack->size = l;
	stack->array = (int *)malloc(l * sizeof(int));
	if (stack->array == NULL)
	{
		free(stack);
		return (NULL);
	}
	return (stack);
}

int	feed_stack(t_stack *stack, char **argv, int args)
{
	int	element;
	int	is_valid;
	char **tmp;
	
	while (args)
	{
		tmp = ft_split(argv[args], ' ');
		is_valid = 1;
		int len_b = count_line(tmp);
		while (--len_b >= 0)
		{
			element = atoi_check(tmp[len_b], &is_valid);
			push(stack, element);
			if (!is_valid)
				return (1);
		}
		args--;
	}
	if (is_duplicated(stack) == 0)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		args;

	if (argc < 2)
		return (0);
	args = argc - 1;
	stack_a = create_stacks(len_stack_a(args, argv)+1);
	stack_b = create_stacks(len_stack_a(args, argv)+1);
	
	if (stack_a == NULL || stack_b == NULL || feed_stack(stack_a, argv, args))
	{
		if (stack_a != NULL && stack_b != NULL)
			error();
		ft_free_stacks(stack_a, stack_b);
		return (1);
	}
	if (!is_sorted(stack_a))
		sort_type(stack_a, stack_b);
	ft_free_stacks(stack_a, stack_b);
	return (0);
}
