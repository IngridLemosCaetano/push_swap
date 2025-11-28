/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:43:38 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/28 09:49:39 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	is_int_str(const char *s, int *out)
{
	long	num;

	num = ft_atol(s);
	if (num > MAX || num < MIN)
		return (0);
	*out = (int)num;
	return (1);
}

static int	*alloc_int_array(char **nptr, int *size)
{
	int	i;
	int	*n_num;

	i = 0;
	while (nptr[i])
		i++;
	if (i == 0)
		error_exit();
	*size = i;
	n_num = malloc(sizeof(int) * i);
	if (!n_num)
		error_exit();
	return (n_num);
}

int	is_duplicate(int *n_num, int len, int value)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if (n_num[j] == value)
			return (1);
		j++;
	}
	return (0);
}

int	*validate_and_convert(char **nptr, int *size)
{
	int	*n_num;
	int	i;
	int	out;

	n_num = alloc_int_array(nptr, size);
	i = 0;
	while (nptr[i])
	{
		if (!is_number(nptr[i]) || !is_int_str(nptr[i], &out)
			|| is_duplicate(n_num, i, out))
		{
			free(n_num);
			error_exit();
		}
		n_num[i] = out;
		i++;
	}
	return (n_num);
}
