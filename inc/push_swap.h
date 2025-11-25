/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:19:01 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/11/25 15:25:07 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/inc/libft.h"
# include <limits.h> //eliminar

typedef struct s_list_swap
{
	int				num;
	struct s_list	*prev;
	struct s_list	*next;
}	t_list_swap;

void	error_printf(void);
void	ft_free_array(char **array);
int		is_number(char	*s);
int		is_repeat(int *array, int num);
int		*valid_str(char *str);
long	ft_atol(const char *str);

#endif
