/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:50:43 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/14 16:07:27 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>

#define SIZE 11

int	main(void)
{
	char	*input_str[SIZE] = {NULL, "", "", "a", "a", "a", "ab", "ab", "ab", "_", "a_b"};
	int		input_chr[SIZE] = {'a', 'a', '\0', 'a', '\0', 'z', 'b', '\0', 'z', '_', '_'};
	char	*expected[SIZE];
	char	*result;
	int i;

	expected[0] = NULL;
	expected[1] = NULL;
	expected[2] = &input_str[2][0];
	expected[3] = &input_str[3][0];
	expected[4] = &input_str[4][1];
	expected[5] = NULL;
	expected[6] = &input_str[6][1];
	expected[7] = &input_str[7][2];
	expected[8] = NULL;
	expected[9] = &input_str[9][0];
	expected[10] = &input_str[10][1];
	printf("Function: ft_strrchr\n");
	i = 1;
	while (i < SIZE)
	{
		result = ft_strrchr(input_str[i], input_chr[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input str: \"%s\"; Input char: %c; Result: \"%s\"; Expected: \"%s\"\n", input_str[i], input_chr[i], result, expected[i]);
		i++;
	}
	reset_color();
}
