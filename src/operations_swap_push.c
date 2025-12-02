/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push_swap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:19:31 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/28 19:00:33 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	swap(t_stack **s)
{
	t_stack	*first;
	t_stack	*second;

	if (!s || !*s || !(*s)->next)
		return ;
	first = *s;
	second = (*s)->next;
	first->next = second->next;
	second->next = first;
	*s = second;
}

void	sa_sb_ss(t_stack **a, t_stack **b, int operation)
{
	if (!operation)
		return ;
	if (operation == 1)
	{
		swap(a);
		ft_printf("sa\n");
	}
	else if (operation == 2)
	{
		swap(b);
		ft_printf("sb\n");
	}
	else if (operation == 3)
	{
		swap(a);
		swap(b);
		ft_printf("ss\n");
	}
}

static void	push(t_stack **from, t_stack **to)
{
	t_stack	*temp;

	if (!from || !*from)
		return ;
	temp = *from;
	*from = (*from)->next;
	temp->next = *to;
	*to = temp;
}

void	pa_pb(t_stack **a, t_stack **b, int operation)
{
	if (operation == 1)
	{
		push(b, a);
		ft_printf("pa\n");
	}
	else if (operation == 2)
	{
		push(a, b);
		ft_printf("pb\n");
	}
}
