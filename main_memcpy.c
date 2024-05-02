/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:41:19 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/16 14:25:10 by pbenito-         ###   ########.fr       */
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
	char	*result;
	int i;

	printf("Function: ft_memcpy\n");
	i = 0;
	while (i < SIZE)
	{
		strcpy(expected, input_src[i]);
		result = ft_memcpy(input_dst, input_src[i], input_n[i]);
		if (!memcmp(result, expected, input_n[i]))
			set_green();
		else
			set_red();
		printf("Input src: \"%s\"; Input n: %d; Result: \"%s\"; Expected: \"%s\"\n", input_src[i], input_n[i], to_string_ascii(result, input_n[i]), to_string_ascii(expected, input_n[i]));
		i++;
	}
	reset_color();
}
