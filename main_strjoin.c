/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:26:36 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/28 10:47:21 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 6

int	main(void)
{
	char	*input_s1[SIZE] = {"", "", "a", "ab", "", "abcd"};
	char	*input_s2[SIZE] = {"", "a", "", "cd", "abcd", ""};
	char	*expected[SIZE] = {"", "a", "a", "abcd", "abcd", "abcd"};
	char	*result;
	int i;

	printf("Function: ft_strjoin\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_strjoin(input_s1[i], input_s2[i]);
		if (!strcmp(result, expected[i]))
			set_green();
		else
			set_red();
		printf("Input s1: \"%s\"; Input s2: \"%s\"; Result: \"%s\"; Expected: \"%s\"\n", input_s1[i], input_s2[i], result, expected[i]);
		i++;
	}
	reset_color();
}
