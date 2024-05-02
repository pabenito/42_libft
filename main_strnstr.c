/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:26:36 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/27 17:04:13 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 7

int	main(void)
{
	char	*input_s1[SIZE] = {"abcd", "abcd", "abcd", "abrakadabra", "abrakadabra", "", ""};
	char	*input_s2[SIZE] = {"a", "bc", "abcd", "ada", "ab", "", "a"};
	size_t	input_n[SIZE] = {4, 4, 4, 11, 11, 1, 1};
	char	*expected[SIZE];
	char	*result;
	int i;

	expected[0] = &input_s1[0][0];
	expected[1] = &input_s1[1][1];
	expected[2] = &input_s1[2][0];
	expected[3] = &input_s1[3][5];
	expected[4] = &input_s1[4][0];
	expected[5] = &input_s1[5][0];
	expected[6] = NULL;

	printf("Function: ft_strnstr\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_strnstr(input_s1[i], input_s2[i], input_n[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input haystack: \"%s\"; Input needle: \"%s\"; Input len: %zu; Result: \"%s\"; Expected: \"%s\"\n", input_s1[i], input_s2[i], input_n[i], result, expected[i]);
		i++;
	}
	reset_color();
}
