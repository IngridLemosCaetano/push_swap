/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:19:01 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/12/02 12:34:55 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/inc/libft.h"

# define MAX 2147483647
# define MIN -2147483648

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}	t_stack;

//linked_list
t_stack	*stack_new(int value);
void	stack_add_front(t_stack **stack, t_stack *new);
t_stack	*build_stack_a(int *nums, int size);
void	free_stack(t_stack **stack);

//utils
void	error_exit(void);
int		is_space(char c);
void	ft_free_array(char **arr);
int		is_number(const char *s);
long	ft_atol(const char *s);

//parsing
int		is_int_str(const char *s, int *out);
int		is_duplicate(int *nums, int len, int value);
int		*validate_and_convert(char **nptr, int *size);

//push_swap
t_stack	*parsing_str(const char *s, int *size, int **nums);
t_stack	*parsing_args(char **av, int size, int **nums);

//operations
void	sa_sb_ss(t_stack **a, t_stack **b, int operation);
void	ra_rb_rr(t_stack **a, t_stack **b, int operation);
void	rra_rrb_rrr(t_stack **a, t_stack **b, int operation);
void	pa_pb(t_stack **a, t_stack **b, int operation);

//ordination
int		is_sorted(t_stack *s);
void	sort_small_3(t_stack **a, t_stack **b, int size);
void	sort_small_5(t_stack **a, t_stack **b, int size);
void	sort(t_stack **a, int size);

//main
int		*get_idx_nums(int *nums, int size);
void	set_indexes(t_stack*a, int *idx, int size);

//radix
void	radix_sort(t_stack **a, t_stack **b, int size);

#endif
