/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:20:46 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/28 18:58:40 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static t_stack	*stack_last(t_stack *s)
{
	if (!s)
		return (NULL);
	while (s->next)
	{
		s = s->next;
	}
	return (s);
}

static void	rotate(t_stack **s)
{
	t_stack	*first;
	t_stack	*last;

	if (!s || !*s || !(*s)->next)
		return ;
	first = *s;
	last = stack_last(*s);
	*s = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra_rb_rr(t_stack **a, t_stack **b, int operation)
{
	if (!operation)
		return ;
	if (operation == 1)
	{
		rotate(a);
		ft_printf("ra\n");
	}
	else if (operation == 2)
	{
		rotate(b);
		ft_printf("rb\n");
	}
	else if (operation == 3)
	{
		rotate(a);
		rotate(b);
		ft_printf("rr\n");
	}
}
