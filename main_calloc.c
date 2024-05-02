/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:20:00 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/27 18:24:48 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3

int	main(void)
{
	int		input_count[SIZE] = {0, 2, 2};
	int		input_size[SIZE] = {2, 2, 0};
	void	*expected[SIZE];
	void	*result;
	int		i;

	printf("Function: ft_memset\n");
	i = 0;
	while (i < SIZE)
	{
		expected[i] = (char *)malloc(input_count[i] * input_size[i]);
		memset(expected[i], 0, input_count[i] * input_size[i]);
		result = ft_calloc(input_count[i], input_size[i]);
		if (!memcmp(result, expected[i], input_count[i] * input_size[i]))
			set_green();
		else
			set_red();
		printf("Input count: %d; Input size: %d; Result: \"%s\"; Expected: \"%s\"\n", input_count[i], input_size[i], to_string_ascii(result, input_count[i] * input_size[i]), to_string_ascii(expected[i], input_count[i] * input_size[i]));
		i++;
	}
	reset_color();
}
