/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:37:08 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/12/01 19:03:28 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;
	int		size;
	int		*n_num;

	if (ac == 2)
	{
		a = parsing_str(av[1], &size, &n_num);
		if (!is_sorted(a))
			sort(&a, size);
	}
	else if (ac > 2)
	{
		a = parsing_args(ac, av, &n_num);
		if (!is_sorted(a))
			sort(&a, ac - 1);
	}
	free_stack(&a);
	free(n_num); //verificar posição correta
	return (0);
}

void	sort(t_stack **a, int size)
{
	t_stack	*b;

	b = NULL;
	if (size <= 3)
		sort_small_3(a, &b, size);
	else if (size <= 5)
		sort_small_5(a, &b, size);
	else
		ft_printf("radix/chunks a ser desenvolvido\n");
}
