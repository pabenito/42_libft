/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:03:32 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/14 12:08:00 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>

#define SIZE 10

int	main(void)
{
	char	input[SIZE] = {'a', 'c', 'z', 'A', 'C', 'Z', '1', '_', ' ', '\0'};
	char	expected[SIZE] = {'A', 'C', 'Z', 'A', 'C', 'Z', '1', '_', ' ', '\0'};
	char	result;
	int		i;

	printf("Function: ft_toupper\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_toupper(input[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input: '%c'; Result: '%c'; Expected: '%c'\n", input[i], result, expected[i]);
		i++;
	}
	reset_color();
}
