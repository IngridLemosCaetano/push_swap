/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:37:08 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/11/24 21:23:07 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// static int	*array_int(char *str)
// {
// 	int		size;
// 	int		*array;
// 	char	**array_str;

// 	size = 0;
// 	array_str = ft_split(str, ' ');
// 	while (array_str[size])
// 		size++;
// 	if (size > 10) // alterar o 10 par ao maximo
// 		error_printf();
// 	array = (int *)malloc(sizeof(int) * (size + 1));
// 	if (array == NULL)
// 		error_printf();
// 	size = 0;
// 	while (array_str[size] && ft_atoi(array_str[size]))
// 	{
// 		array[size] = ft_atoi(array_str[size]);
// 		size++;
// 	}
// 	return(array);
// }



int main(void)
{
	char *str1 = "100 90 80 70 60 50 40 30 20 10";
	// int num_array[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
	int i = 0;
	int *array = valid_str(str1);
	while(array[i])
	{
		ft_printf("%d ", array[i]);
		i++;
	}
	i = 0;
	// int num = 80;
	// ft_printf("\n%d is_repeat: %d\n", num, is_repeat(num_array, num, 10));
	return(0);
}

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
