/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:44:58 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/30 02:00:06 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_digit(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

int	atoi_check(const char *s, int *is_valid)
{
	long long	n;
	int			sign;

	sign = 1;
	n = 0;
	if ((*s == '-' || *s == '+') && *(s + 1) != '\0')
		if (*s++ == '-')
			sign = -1;
	while (*s && is_digit(*s))
	{
		n = n * 10 + (*s - '0');
		if ((sign == 1 && n > INT_MAX) || (sign == -1 && -1 * n < INT_MIN))
		{
			*is_valid = 0;
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		s++;
	}
	if (*s != '\0')
		*is_valid = 0;
	return (n * sign);
}
