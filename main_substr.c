/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:26:36 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/28 10:34:04 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 13

int	main(void)
{
	char	*input_str[SIZE] = { "", "", "", "a", "a", "a", "a", "ab", "ab", "ab", "ab", "ab", "ab"};
	int		input_start[SIZE] = {0,  1,  0,  0,   1,   1,   0,   0,    0,    1,    0,    1,    5};
	int		input_len[SIZE] = {  0,  1,  1,  1,   0,   1,   2,   1,    2,    1,    3,    3,    5};
	char	*expected[SIZE] = {  "", "", "", "a", "",  "",  "a", "a",  "ab", "b",  "ab", "b",  ""};
	char	*result;
	int i;

	printf("Function: ft_substr\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_substr(input_str[i], input_start[i], input_len[i]);
		if (!strcmp(result, expected[i]))
			set_green();
		else
			set_red();
		printf("Input str: \"%s\"; Input start: %d; Input len: %d; Result: \"%s\"; Expected: \"%s\"\n", input_str[i], input_start[i], input_len[i], result, expected[i]);
		i++;
	}
	reset_color();
}
