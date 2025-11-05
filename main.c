/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:37:08 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/11/05 15:49:07 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int argc, char *argv[])
{
	int	*array_int;
	int	i;

	if (argc != 2)
		ft_printf("Error\n");
	else
	{
		array_int = ft_split(argv[1], ' ');
		i = 0;
		while (array_int[i])
		{
			ft_atoi(array_int);
			ft_printf("Valor[%d]: %d.\n", i + 1, array_int[1]);
			i++;
		}
	}
	return (0);
}
