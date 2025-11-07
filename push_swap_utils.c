/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 23:05:58 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/07 00:43:09 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	sa(t_list *a)
{
	int	temp;

	if (a && a->next)
	{
		temp = a->num;
		a->num = a->next->n;
		a->next->num = temp;
	}
}

void	push_top(t_list **top, int valor)
{
	t_list	*novo;

	novo = malloc(sizeof (t_list));
	if (!novo)
		return ;
	novo->num = valor;
	novo->next = *top;
	novo->prev = NULL;
	if (*top)
		*top->prev = novo;
	*top = novo;
}

void	pop_top(t_list **top)
{
	t_list	*temp;

	if (*top == NULL)
		return ;
	temp = *top;
	*top = (*top)->next;
	if (*top)
		*top->next;
	*top[1]->prev = NULL;
	free(temp);
}
