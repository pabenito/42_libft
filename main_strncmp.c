/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:26:36 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/14 16:46:10 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 11

int	main(void)
{
	char	*input_s1[SIZE] = {"", "a", "", "", "a", "", "a", "a", "b", "ab", "aa"};
	char	*input_s2[SIZE] = {"", "", "a", "", "", "a", "a", "b", "a", "aa", "ab"};
	size_t	input_n[SIZE] = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1};
	int		expected[SIZE] = {0, 'a' - '\0', '\0' - 'a', 0, 0, 0, 0, 'a' - 'b', 'b' - 'a', 0, 0};
	int		result;
	int i;

	printf("Function: ft_strncmp\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_strncmp(input_s1[i], input_s2[i], input_n[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input s1: \"%s\"; Input s2: \"%s\"; Input n: %zu; Result: %d; Expected: %d\n", input_s1[i], input_s2[i], input_n[i], result, expected[i]);
		i++;
	}
	reset_color();
}
