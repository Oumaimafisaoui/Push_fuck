/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:42:04 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 00:00:18 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	min_num(int *array, int len)
{
	int	index;
	int	min;
	int	num;

	index = 1;
	num = 0;
	min = array[0];
	while (index < len)
	{
		if (array[index] <= min)
		{
			min = array[index];
			num = index;
		}
		index++;
	}
	return (num);
}
