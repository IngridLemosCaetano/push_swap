/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:19:01 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/11/28 09:49:48 by ingrid           ###   ########.fr       */
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
	struct s_stack	*next;
}	t_stack;

//main
t_stack	*stack_new(int value);
void	stack_add_front(t_stack **stack, t_stack *new);
t_stack	*build_stack_a(int *n_num, int size);

//utils
void	error_exit(void);
int		is_space(char c);
void	ft_free_array(char **array);
int		is_number(const char *s);
long	ft_atol(const char *s);

//parsing
int		is_int_str(const char *s, int *out);
int		is_duplicate(int *n_num, int len, int value);
int		*validate_and_convert(char **nptr, int *size);

//push_swap
t_stack	*parsing_str(const char *s);
t_stack	*parsing_args(int ac, char **av);

#endif
