/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:44:41 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/28 19:01:21 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static t_stack	*stack_before_last(t_stack *s)
{
	if (!s || !s->next)
		return (NULL);
	while (s->next && s->next->next)
		s = s->next;
	return (s);
}

static void	reverse_rotate(t_stack **s)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!s || !*s || !(*s)->next)
		return ;
	before_last = stack_before_last(*s);
	last = before_last->next;
	before_last->next = NULL;
	last->next = *s;
	*s = last;
}

void	rra_rrb_rrr(t_stack **a, t_stack **b, int operation)
{
	if (!operation)
		return ;
	if (operation == 1)
	{
		reverse_rotate(a);
		ft_printf("rra\n");
	}
	else if (operation == 2)
	{
		reverse_rotate(b);
		ft_printf("rrb\n");
	}
	else if (operation == 3)
	{
		reverse_rotate(a);
		reverse_rotate(b);
		ft_printf("rrr\n");
	}
}
