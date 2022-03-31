/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:14:52 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/31 00:15:48 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int len_stack_a(int args, char **argv)
{
	int	element;
	int	is_valid;
	char **tmp;
	int len = 0;
	while (args)
	{
		tmp = ft_split(argv[args], ' ');
		is_valid = 1;
		int len_b = count_line(tmp);
		while (--len_b >= 0)
		{
			element = atoi_check(tmp[len_b], &is_valid);
			if (!is_valid)
				return (1);
			len++;
		}
		args--;
	}
	return len;
}

int count_line(char **tmp)
{
	int i = 0;
	if (!tmp)
		return 0;
	while (tmp[i])
		i++;
	return i;
}


