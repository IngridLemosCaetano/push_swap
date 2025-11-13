/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:37:08 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/11/13 18:51:25 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char *argv[])
{
	int	*array_int;
	int	i;

	if (argc == 2)
	{
		array_int = (int *)ft_split(argv[1], ' ');
		i = 0;
		while (array_int[i])
		{
			// ft_atoi(array_int[i]);
			ft_printf("Valor[%d]: %d.\n", i + 1, array_int[1]);
			i++;
		}
	}
	ft_printf("Error\n");
	return (0);
}
