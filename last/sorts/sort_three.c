/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:42:25 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 02:03:46 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack *stack)
{
	int	first;
	int	second;
	int	third;

	first = stack->array[2];
	second = stack->array[1];
	third = stack->array[0];
	if (first > second && second < third && first < third)
		sa(stack, 1);
	else if (first > second && first > third && second < third)
		ra(stack, 1);
	else if (first > second && first > third && second > third)
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if (first < second && first < third && second > third)
	{
		rra(stack, 1);
		sa(stack, 1);
	}
	else if (first < second && second > third && third < first)
		rra(stack, 1);
}
