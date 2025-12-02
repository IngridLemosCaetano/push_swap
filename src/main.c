/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:37:08 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/12/01 21:10:59 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;
	int		size;
	int		*nums;

	if (ac == 2)
		a = parsing_str(av[1], &size, &nums);
	else if (ac > 2)
	{
		size = ac - 1;
		a = parsing_args(av, size, &nums);
	}
	if (!is_sorted(a))
		sort(&a, size);
	free_stack(&a);
	free(nums);
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

int	*get_idx_nums(int *nums, int size)
{
	int	i;
	int	j;
	int	rank;
	int	*idx;

	idx = malloc(sizeof(int) * size);
	if (!idx)
		return (NULL);
	i = 0;
	while(i < size)
	{
		j = 0;
		rank = 0;
		while(j < size)
		{
			if (nums[j] < nums[i])
				rank++;
			j++;
		}
		idx[i] = rank;
		i++;
	}
	return (idx);
}
