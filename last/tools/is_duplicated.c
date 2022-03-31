/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicated.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:46:35 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 02:03:46 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_duplicated(t_stack *stack)
{
	int	i;
	int	j;	

	j = 1;
	i = 0;
	while (i < stack->size)
	{
		while (j < stack->size)
		{
			if (stack->array[i] == stack->array[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
