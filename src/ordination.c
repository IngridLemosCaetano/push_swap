/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordination.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:08:08 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/29 09:38:17 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	is_sorted(t_stack *a)
{
	if (!a || !a->next)
		return (1);
	while (a->next)
	{
		if (a->num > a->next->num)
			return (0);
		a = a->next;
	}
	return (1);
}

void	sort_small(t_stack **a, t_stack **b, int size)
{
	if (size == 2)
		sa_sb_ss(a, b, 1);
	else if (size == 3)
	{
		if ((*a)->num > (*a)->next->num)
		{
			sa_sb_ss(a, b, 1);
			if(!is_sorted(*a))
				rra_rrb_rrr(a, b, 1);
			if(!is_sorted(*a))
				sa_sb_ss(a, b, 1);
		}
		else
		{
			rra_rrb_rrr(a, b , 1);
			if(!is_sorted(*a))
				sa_sb_ss(a, b, 1);
		}
	}
}

void	sort(t_stack **a, t_stack **b, int size)
{
	if (size == 2 || size == 3)
		sort_small(a, b, size);
	// else if (size == 4 || size == 5)
	// 	sort_4_5(a, b, size);
	else
		ft_printf("sort_big em desenvolvimento\n");
}
