/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:04:22 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 11:34:12 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_digits(int n)
{
	int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

void	fill_zero(char *str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
}

char	*init_str(size, is_negative)
{
	char	*str;

	str = (char *) malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	str[size - 1] = '\0';
	if (is_negative)
		str[0] = '-';
	return (str);
}

void	set_params(int *n, int *is_negative, int *size, char **str)
{
	int		digits;

	*is_negative = 0;
	if (*n < 0)
		*is_negative = 1;
	if (*n < 0)
		*n = -(*n);
	digits = count_digits(*n);
	*size = digits + 1;
	if (*is_negative)
		(*size)++;
	*str = init_str(*size, *is_negative);
}

char	*ft_itoa(int n)
{
	int		is_negative;
	int		size;
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	set_params(&n, &is_negative, &size, &str);
	if (!str)
		return (NULL);
	i = size - 2;
	while (i >= is_negative)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (str);
}
