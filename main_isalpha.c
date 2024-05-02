/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:20:50 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/12 19:13:56 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>

#define SIZE 4

int	main(void)
{
	char	input[SIZE] = {'a', 'A', '1', '\0'};
	int		expected[SIZE] = {1, 1, 0, 0};
	int		result;
	int		i;

	printf("Function: ft_isalpha\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_isalpha(input[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input: '%c'; Result: %d; Expected: %d\n", input[i], result, expected[i]);
		i++;
	}
	reset_color();
}
