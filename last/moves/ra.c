/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:40:56 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 02:03:46 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *stack, int flag)
{
	int	len;
	int	last;

	len = stack->top;
	last = stack->array[len];
	while (len >= 0)
	{
		stack->array[len] = stack->array[len - 1];
		len--;
	}
	stack->array[0] = last;
	if (flag)
		ft_putstr_fd("ra\n", 1);
}
