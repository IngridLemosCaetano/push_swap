/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:55:11 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/29 10:27:12 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->num = value;
	node->next = NULL;
	return (node);
}

void	stack_add_front(t_stack **stack, t_stack *new)
{
	if (!new)
		return ;
	new->next = *stack;
	*stack = new;
}

t_stack	*build_stack_a(int *n_num, int size)
{
	t_stack	*a;
	int		i;

	a = NULL;
	i = size - 1;
	while (i >= 0)
	{
		stack_add_front(&a, stack_new(n_num[i]));
		i--;
	}
	return (a);
}

//rever o free e adicionar ao .h
void	free_stack(t_stack **stack)
{
	t_stack	*temp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	*stack = NULL;
}
