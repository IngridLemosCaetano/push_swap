/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:37:08 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/11/26 20:21:59 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char *av[])
{
	int	*array_int;

	if (ac == 1)
		error_printf();
	if (ac == 2)
	{
		// ft_printf("%s\n",av[1]);
		array_int= valid_str(av[1]);
		ft_printf("%d\n", array_int[0]);
	}
	return (0);
}

// int main(void)
// {
// 	char *str1 = "100 90 2147483648 80 70 60 50 40 30 20 10";
// 	// int num_array[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
// 	int i = 0;
// 	int *array = valid_str(str1);
// 	while(array[i])
// 	{
// 		ft_printf("%d ", array[i]);
// 		i++;
// 	}
// 	return(0);
// }

// int	main(int argc, char *argv[])
// {
// 	char	**array_str;
// 	int		len;
// 	int		i;
// 	int		*array;
//
// 	if (argc >= 2)
// 	{
// 		i = 0;
// 		array_str = 0;
// 		if(argc == 2)
// 		{
// 			array = array_int(argv[1], array_str);
// 			ft_printf("num1: %d\n", array[i]);
// 		}
// 		else
// 		{
// 			len = argc - 1;
// 			array = (int *)malloc(sizeof(int))
// 		}
// 			ft_printf("Ainda não fiz...\n");
// 	}
// 	else
// 		error_printf();
// 	ft_printf("\n");
// 	return (0);
// }
