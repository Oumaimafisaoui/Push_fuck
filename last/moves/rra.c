/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:41:10 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 02:03:46 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stack, int flag)
{
	int	len;
	int	index;
	int	first;

	first = stack->array[0];
	index = 0;
	len = stack->top;
	while (index <= len)
	{
		stack->array[index] = stack->array[index + 1];
		index++;
	}
	stack->array[len] = first;
	if (flag)
		ft_putstr_fd("rra\n", 1);
}
