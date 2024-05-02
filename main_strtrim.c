/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:26:36 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 06:24:58 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 9

int	main(void)
{
	char	*input_str[SIZE] = {"", "a", "a", "aa", "abab", "132abab132", "1a", "a1", ""};
	char	*input_set[SIZE] = {"", "",  "a", "a",  "ab",   "012345",     "1",  "1", "cdef"};
	char	*expected[SIZE] = { "", "a", "",  "",   "",     "abab",       "a",  "a", ""};
	char	*result;
	int i;

	printf("Function: ft_strjoin\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_strtrim(input_str[i], input_set[i]);
		if (!strcmp(result, expected[i]))
			set_green();
		else
			set_red();
		printf("Input str: \"%s\"; Input set: \"%s\"; Result: \"%s\"; Expected: \"%s\"\n", input_str[i], input_set[i], result, expected[i]);
		reset_color();
		i++;
	}
}
