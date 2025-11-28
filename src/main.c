/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:37:08 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/11/28 09:55:13 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;

	if (ac == 1)
		error_exit();
	if (ac == 2)
		a = parsing_str(av[1]);
	else
		a = parsing_args(ac, av);
	printf("T_Stack a: %d\n", a->num); //eliminar
	return (0);
}
//adicionar em algum arquivo
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
