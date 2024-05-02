/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:03:45 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/23 17:40:15 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>

#define SIZE 8

int	main(void)
{
	char	*input_str1[SIZE] = {NULL, "b", "1", "a", "0", "a1", "a", "ab"};
	char	*input_str2[SIZE] = {NULL, "a", "0", "b", "1", "a0", "a", "ab"};
	size_t	input_n[SIZE] = {0, 2, 2, 2, 2, 3, 2, 3};
	int		expected[SIZE] = {0, 1, 1, -1, -1, 1, 0, 0};
	int		result;
	int i;

	printf("Function: ft_memcmp\n");
	i = 1;
	while (i < SIZE)
	{
		result = ft_memcmp((const void *)input_str1[i], (const void *)input_str2[i], input_n[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input str1: \"%s\"; Input str2: \"%s\"; Input n: %zu; Result: %d; Expected: %d\n", input_str1[i], input_str2[i], input_n[i], result, expected[i]);
		i++;
	}
	reset_color();
}
