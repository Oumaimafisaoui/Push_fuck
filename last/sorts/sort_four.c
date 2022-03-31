/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:42:19 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 02:03:46 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_index2(int num, t_stack *stack_a, t_stack *stack_b)
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
		sa(stack_a, 1);
		pb(stack_a, stack_b);
	}
	else if (num == 3)
		pb(stack_a, stack_b);
}

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	int	num;

	num = min_num(stack_a->array, stack_a->size);
	check_index2(num, stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}
