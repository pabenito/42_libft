/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:41:19 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/02 18:19:43 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 4
#define STR_LEN 100

int	main(void)
{
	char	*input_src[SIZE] = {"", "a", "a", "ab"};
	int		input_n[SIZE] = {0, 0, 1, 2};
	char	input_dst[STR_LEN];
	char	expected[STR_LEN];
	char	*src;
	char	original_src[STR_LEN];
	char	*result;
	int		i;
	int		n;
	int		shift;

	printf("Function: ft_memmove\n");
	i = 0;
	while (i < SIZE)
	{
		strcpy(expected, input_src[i]);
		result = ft_memmove(input_dst, input_src[i], input_n[i]);
		if (!memcmp(result, expected, input_n[i]))
			set_green();
		else
			set_red();
		printf("Input src: \"%s\"; Input n: %d; Result: \"%s\"; Expected: \"%s\"\n", input_src[i], input_n[i], to_string_ascii(result, input_n[i]), to_string_ascii(expected, input_n[i]));
		i++;
	}
	src = (char *)malloc(sizeof(char) * STR_LEN);
	n = 4;
	shift = 3;
	strcpy(src, "abcdefghijk");
	strcpy(original_src, src);
	strcpy(expected, "abcabcdhijk");
	result = ft_memmove(&src[shift], src, n);
	if (!memcmp(src, expected, n))
		set_green();
	else
		set_red();
	printf("Input src: \"%s\"; Input n: %d; Result: \"%s\"; Expected: \"%s\"\n", original_src, n, src, expected);
	reset_color();
}
