/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 02:01:52 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/31 02:52:36 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_stack
{
	int	*array;
	int	size;
	int	top;
}	t_stack;

size_t	ft_strlen(const char *str);
void	ft_free_array(char **sentence, int n);
int		count_line(char **tmp);
int		len_stack_a(int args, char **argv);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	ft_putstr_fd(char *str, int fd);
void	insertion_sort(int *array, int args);
int		indexing(int *sort, int *tmp, int args);
int		sort_index(t_stack *stack_a);
void	radix(t_stack *stack_a, t_stack *stack_b);
int		bits_count(t_stack *stack_a);
int		size_it(t_stack *stack_a);
void	sort_four(t_stack *stack_a, t_stack *stack_b);
void	sort_five(t_stack *stack_a, t_stack *stack_b);
void	check_index2(int num, t_stack *stack_a, t_stack *stack_b);
void	sort_three(t_stack *stack);
void	sort_two(t_stack *stack);
void	sort_type(t_stack *stack_a, t_stack *stack_b);
int		is_empty(t_stack *st);
void	ra(t_stack *stack, int flag);
void	rb(t_stack *stack, int flag);
void	rr(t_stack *stack);
void	sb(t_stack *stack, int flag);
void	ss(t_stack *stack);
void	rra(t_stack *stack, int flag);
void	rrb(t_stack *stack, int flag);
void	sa(t_stack *stack, int flag);
void	rrr(t_stack *stack);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
int		min_num(int *array, int len);
void	ft_swap(int *a, int *b);
void	ft_free_stacks(t_stack *stack_a, t_stack *stack_b);
int		pop(t_stack *stack);
int		is_sorted(t_stack *stack);
int		is_duplicated(t_stack *stack);
t_stack	*create_t_stack(int size);
void	push(t_stack *stack, int element);
void	error(void);
int		atoi_check(const char *s, int *is_valid);

#endif
