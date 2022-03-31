/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:42:14 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 22:29:58 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_index(t_stack *stack_a)
{
	int	*sort;
	int	index;

	sort = malloc(sizeof(int) * stack_a->size);
	if (sort == NULL)
		return (1);
	index = 0;
	while (index < stack_a->size)
	{
		sort[index] = stack_a->array[index];
		index++;
	}
	insertion_sort(sort, stack_a->size);
	if (indexing(sort, stack_a->array, stack_a->size))
	{
		free(sort);
		return (1);
	}
	free(sort);
	return (0);
}

int	bits_count(t_stack *stack_a)
{
	int	n;
	int	nb;

	nb = 0;
	n = stack_a->size - 1;
	while (n)
	{
		n = n >> 1;
		++nb;
	}
	return (nb);
}

int	size_it(t_stack *stack_a)
{
	int	index1;
	int	index2;

	index1 = stack_a->top - 1;
	index2 = 0;
	while (index2 < index1)
		index2++;
	return (index2);
}

void	radix(t_stack *stack_a, t_stack *stack_b)
{
	int	bits;
	int	index1;
	int	index2;

	if (sort_index(stack_a))
		return ;
	bits = bits_count(stack_a);
	index1 = 0;
	index2 = 0;
	while (index1 < bits)
	{
		index2 = stack_a->size;
		while (index2-- > 0)
		{
			if (stack_a->array[stack_a->top] & (1 << index1))
				ra(stack_a, 1);
			else
				pb(stack_a, stack_b);
		}
		while (!is_empty(stack_b))
			pa(stack_a, stack_b);
		index1++;
	}
}
