/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:46:51 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/31 03:04:46 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_stack_a(int args, char **argv)
{
	int		is_valid;
	char	**array;
	int		len;
	int		array_len;

	len = 0;
	while (args)
	{
		array = ft_split(argv[args--], ' ');
		array_len = count_line(array);
		while (--array_len >= 0)
		{
			is_valid = 1;
			atoi_check(array[array_len], &is_valid);
			if (!is_valid)
			{
				ft_free_array(array, count_line(array));
				return (-1);
			}
			len++;
		}
		ft_free_array(array, count_line(array));
	}
	return (len);
}

int	count_line(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return (0);
	while (array[i])
		i++;
	return (i);
}

t_stack	*create_stacks(int len)
{
	t_stack	*stack;

	if (len < 0)
		return (NULL);
	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->top = -1;
	stack->size = len;
	stack->array = (int *)malloc(len * sizeof(int));
	if (stack->array == NULL)
	{
		free(stack);
		return (NULL);
	}
	return (stack);
}

int	feed_stack(t_stack *stack, char **argv, int args)
{
	int		element;
	int		is_valid;
	char	**array;
	int		array_len;

	while (args)
	{
		array = ft_split(argv[args--], ' ');
		array_len = count_line(array);
		while (--array_len >= 0)
		{
			is_valid = 1;
			element = atoi_check(array[array_len], &is_valid);
			if (!is_valid)
			{
				ft_free_array(array, count_line(array));
				return (1);
			}
			push(stack, element);
		}
		ft_free_array(array, count_line(array));
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
	int		total_len;

	if (argc < 2)
		return (0);
	args = argc - 1;
	total_len = len_stack_a(args, argv);
	stack_a = create_stacks(total_len);
	stack_b = create_stacks(total_len);
	if (stack_a == NULL || stack_b == NULL || feed_stack(stack_a, argv, args))
	{
		error();
		ft_free_stacks(stack_a, stack_b);
		return (1);
	}
	if (!is_sorted(stack_a))
		sort_type(stack_a, stack_b);
	ft_free_stacks(stack_a, stack_b);
	return (0);
}
