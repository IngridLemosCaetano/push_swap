/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:37:08 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/11/29 10:28:49 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	if (ac == 2)
	{
		a = parsing_str(av[1], &size);;
		if (!is_sorted(a))
			sort(&a, &b, size);
	}
	else if (ac > 2)
	{
		b = NULL;
		a = parsing_args(ac, av);
		if (!is_sorted(a))
			sort(&a, &b, ac - 1);
	}
	// free_stack(&a);
	return (0);
}

// static void    print_stack(const char *name, t_stack *s)
// {
//     printf("%s: ", name);
//     while (s)
//     {
//         printf("%d ", s->num);
//         s = s->next;
//     }
//     printf("\n");
// }

