/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 23:05:58 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/25 15:54:11 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	error_printf(void)
{
	ft_printf("Error\n");
	exit(1);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	ft_free_array(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return ;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	is_number(char	*s)
{
	int	i;

	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_repeat(int *array, int num)
{
	int	i;

	i = 0;
	while (array[i] != 0)
	{
		if (array[i] == num)
			return (1);
		i++;
	}
	return (0);
}

// long	ft_atol(const char *str)
// {
// 	long	i;
// 	long	sign;
// 	long	result;

// 	i = 0;
// 	sign = 1;
// 	result = 0;
// 	while (is_space(str[i]))
// 		i++;
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
// 	result*=sign;
// 	if (result > INT_MAX || result < INT_MIN)
// 		return (0);
// 	return (result);
// }

long	ft_atol(const char *str, long num)
{
	long	i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (!str[i])
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result*=sign;
	if (result > INT_MAX || result < INT_MIN)
		return (0);
	num = (int)result;
	return (result);
}

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
		ft_atol(array_str[i], num);
		if(!is_number(array_str[i]) || num == NULL)
		{
			free(array_int);
			ft_free_array(array_str);
			error_printf();
		}
		array_int[i] = (int)num;
		i++;
	}
	array_int[size] = 0;
	ft_free_array(array_str);
	return(array_int);
}


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
