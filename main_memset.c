/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:20:00 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/16 13:26:01 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 6
#define STR_LEN 5
#define DEFAULT_CHAR '0'

int	main(void)
{
	char	input_b_copy[STR_LEN + 1];
	char	input_b[STR_LEN + 1];
	char	input_c[SIZE] = {'a', 'a', 'A', '1', '_', ' '};
	char	input_len[SIZE] = {0, 1, 2, 3, 4, 5};
	char	*expected[SIZE];
	char	*result;
	int		i;
	int		j;

	i = 0;
	while (i < SIZE)
	{
		expected[i] = (char *)malloc(sizeof(char) * STR_LEN + 1);
		j = 0;
		while (j < STR_LEN)
		{
			if (j < input_len[i])
				expected[i][j] = input_c[i];
			else
				expected[i][j] = DEFAULT_CHAR;
			j++;
		}
		expected[i][j] = '\0';
		i++;
	}
	printf("Function: ft_memset\n");
	i = 0;
	while (i < SIZE)
	{
		strfill(input_b, DEFAULT_CHAR, STR_LEN);
		strcpy(input_b_copy, input_b);
		result = ft_memset(input_b, input_c[i], input_len[i]);
		if (!strcmp(result, expected[i]))
			set_green();
		else
			set_red();
		printf("Input b: \"%s\"; Input c: '%c'; Intpu len: %d; Result: \"%s\"; Expected: \"%s\"\n", input_b_copy, input_c[i], input_len[i], result, expected[i]);
		i++;
	}
	reset_color();
}
