/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:46:40 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/31 01:26:26 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_empty(t_stack *st)
{
	if (st->top == -1)
		return (1);
	return (0);
}

void	push(t_stack *stack, int element)
{
	if (stack->top == stack->size - 1)
		return ;
	else
	{
		stack->top++;
		stack->array[stack->top] = element;
	}
}

int	pop(t_stack *stack)
{
	int	x;

	x = -1;
	if (stack->top == -1)
		ft_putstr_fd("Stack Underflow\n", 1);
	else
		x = stack->array[stack->top--];
	return (x);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a != NULL)
	{
		free(stack_a->array);
		free(stack_a);
	}
	if (stack_b != NULL)
	{
		free(stack_b->array);
		free(stack_b);
	}
}
