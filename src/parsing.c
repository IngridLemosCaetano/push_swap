/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:43:38 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/26 20:24:09 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

long	ft_atol(const char *s)
{
	long	i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	if (!s[i])
		return (0);
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	result*=sign;
	if (result > INT_MAX || result < INT_MIN)
		return (0);
	return (result);
}

int	is_int_str(const char *s)
{

}

// long	ft_atol(const char *str, long num)
// {
// 	long	i;
// 	long	sign;
// 	long	result;

// 	i = 0;
// 	sign = 1;
// 	result = 0;
// 	if (str[i] == '+' || str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	if (!str[i])
// 		return (0);
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	result *= sign;
// 	if (result > INT_MAX || result < INT_MIN)
// 		return (0);
// 	num = (int)result;
// 	return (result);
// }

int	*valid_str(char *str)
{
	char	**array_str;
	int		*array_int;
	int		size;
	int		i;
	long	num;

	size = 0;
	array_str = ft_split(str, ' ');
	if (!array_str)
		return (NULL);
	while (array_str[size])
		size++;
	array_int = malloc(sizeof(int) * (size + 1));
	if (!array_int)
	{
		ft_free_array(array_str);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		num = ft_atol(array_str[i]);
		if (!is_number(array_str[i]))
		{
			free(array_int);
			ft_free_array(array_str);
			error_exit();
		}
		array_int[i] = (int)num;
		i++;
	}
	array_int[size] = 0;
	ft_free_array(array_str);
	return (array_int);
}
