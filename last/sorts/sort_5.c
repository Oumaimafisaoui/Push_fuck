/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:42:10 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 02:03:46 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_index(int num, t_stack *stack_a, t_stack *stack_b)
{
	if (num == 0)
	{
		rra(stack_a, 1);
		pb(stack_a, stack_b);
	}
	else if (num == 1)
	{
		rra(stack_a, 1);
		rra(stack_a, 1);
		pb(stack_a, stack_b);
	}
	else if (num == 2)
	{
		ra(stack_a, 1);
		ra(stack_a, 1);
		pb(stack_a, stack_b);
	}
	else if (num == 3)
	{
		sa(stack_a, 1);
		pb(stack_a, stack_b);
	}
	else if (num == 4)
		pb(stack_a, stack_b);
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	int	num;

	num = min_num(stack_a->array, stack_a->size);
	check_index(num, stack_a, stack_b);
	num = min_num(stack_a->array, stack_a->size - 1);
	check_index2(num, stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
