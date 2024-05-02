/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:11:31 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/14 12:11:35 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>

#define SIZE 10

int	main(void)
{
	char	input[SIZE] = {'a', 'c', 'z', 'A', 'C', 'Z', '1', '_', ' ', '\0'};
	char	expected[SIZE] = {'a', 'c', 'z', 'a', 'c', 'z', '1', '_', ' ', '\0'};
	char	result;
	int		i;

	printf("Function: ft_tolower\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_tolower(input[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input: '%c'; Result: '%c'; Expected: '%c'\n", input[i], result, expected[i]);
		i++;
	}
	reset_color();
}
