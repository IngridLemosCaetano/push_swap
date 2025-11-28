/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:03:54 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/11/28 18:59:06 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static char	**split_args(const char *s)
{
	char	**nptr;
	int		i;

	if (!s)
		error_exit();
	nptr = ft_split(s, ' ');
	if (!nptr)
		error_exit();
	i = 0;
	while (nptr[i])
		i++;
	if (i == 0)
	{
		ft_free_array(nptr);
		error_exit();
	}
	return (nptr);
}

t_stack	*parsing_str(const char *s)
{
	char	**nptr;
	int		*n_num;
	int		size;
	t_stack	*a;

	nptr = split_args(s);
	n_num = validate_and_convert(nptr, &size);
	ft_free_array(nptr);
	a = build_stack_a(n_num, size);
	free(n_num);
	return (a);
}

t_stack	*parsing_args(int ac, char **av)
{
	int		i;
	int		*n_num;
	int		out;
	t_stack	*a;

	n_num = malloc(sizeof(int) * (ac -1));
	if (!n_num)
		error_exit();
	i = 0;
	while (i < (ac - 1))
	{
		if (!is_number(av[i + 1]) || !is_int_str(av[i + 1], &out)
			|| is_duplicate(n_num, i, out))
		{
			free(n_num);
			error_exit();
		}
		n_num[i] = out;
		i++;
	}
	a = build_stack_a(n_num, ac - 1);
	free(n_num);
	return (a);
}
