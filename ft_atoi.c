/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:11:07 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/27 17:44:32 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ');
}

void	skip_spaces(const char *str, int *i)
{
	while (is_space(str[*i]))
		(*i)++;
}

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_negative(const char *str, int *i)
{
	int	is_negative;

	is_negative = 0;
	if (is_sign(str[*i]))
	{
		if (str[*i] == '-')
			is_negative = !is_negative;
		(*i)++;
	}
	return (is_negative);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	i;
	int	negative;

	i = 0;
	skip_spaces(str, &i);
	negative = is_negative(str, &i);
	n = 0;
	while (ft_isdigit(str[i]))
	{
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	if (negative)
		return (-n);
	return (n);
}
