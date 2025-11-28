/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:44:41 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/27 16:57:25 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// void	sa(t_list_swap *a)
// {
// 	int	temp;

// 	if (a && a->next)
// 	{
// 		temp = a->num;
// 		a->num = a->next->n;
// 		a->next->num = temp;
// 	}
// }

// void	push_top(t_list_swap **top, int valor)
// {
// 	t_list_swap	*novo;

// 	novo = malloc(sizeof (t_list_swap));
// 	if (!novo)
// 		return ;
// 	novo->num = valor;
// 	novo->next = *top;
// 	novo->prev = NULL;
// 	if (*top)
// 		*top->prev = novo;
// 	*top = novo;
// }

// void	pop_top(t_list_swap **top)
// {
// 	t_list_swap	*temp;

// 	if (*top == NULL)
// 		return ;
// 	temp = *top;
// 	*top = (*top)->next;
// 	if (*top)
// 		*top->next;
// 	*top[1]->prev = NULL;
// 	free(temp);
// }
