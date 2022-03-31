/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:45:09 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 22:30:09 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	indexing(int *sort, int *array, int args)
{
	int	x;
	int	y;
	int	*helper;

	x = 0;
	y = 0;
	helper = malloc(args * sizeof(int));
	if (helper == NULL)
		return (1);
	while (y < args)
	{
		x = 0;
		while (x < args)
		{
			if (array[y] == sort[x])
				helper[y] = x;
			x++;
		}
		y++;
	}
	x = -1;
	while (++x < args)
		array[x] = helper[x];
	free(helper);
	return (0);
}
