/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:29:31 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/12 18:59:01 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include "./_main_utils.h"
#include <stdio.h>

#define SIZE 14

int	main(void)
{
	int	input[SIZE] = {-1, 0, '0' - 1, '9' + 1, 'a' - 1, 'A' - 1, 'z' + 1, 'Z' + 1, '0', '9', 'a', 'z', 'A', 'Z'};
	int	expected[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};
	int	result;
	int	i;

	printf("Function: ft_isalnum\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_isalnum(input[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input: '%c'; Result: %d; Expected: %d\n", input[i], result, expected[i]);
		i++;
	}
	reset_color();
}
