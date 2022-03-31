/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:41:57 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 01:58:51 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	insertion_sort(int *array, int args)
{
	int	index1;
	int	index2;

	index1 = 1;
	while (index1 < args)
	{
		if (array[index1] < array[index1 - 1])
		{
			index2 = index1;
			while (array[index2] < array[index2 - 1] && index2 > 0)
			{
				ft_swap(&array[index2], &array[index2 - 1]);
				if (index2 - 1 > 0)
					index2--;
			}
		}
		index1++;
	}
}
