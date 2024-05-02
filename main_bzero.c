/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:37:28 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/16 13:24:47 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 3
#define STR_LEN 3
#define DEFAULT_CHAR '0'

int	main(void)
{
	char	input_s_copy[STR_LEN + 1];
	char	input_s[STR_LEN + 1];
	int		input_len[SIZE] = {0, 1, 2};
	char	expected[STR_LEN + 1];
	char	*result;
	int		i;

	printf("Function: ft_bzero\n");
	i = 0;
	while (i < SIZE)
	{
		memset(input_s, DEFAULT_CHAR, STR_LEN);
		input_s[STR_LEN] = '\0';
		strcpy(input_s_copy, input_s);
		memset(expected, '\0', input_len[i]);
		memset(&expected[input_len[i]], DEFAULT_CHAR, STR_LEN - input_len[i]);
		expected[STR_LEN] = '\0';
		result = ft_bzero(input_s, input_len[i]);
		if (!memcmp(result, expected, STR_LEN))
			set_green();
		else
			set_red();
		printf("Input s: \"%s\"; Input n: %d; Result: \"%s\"; Expected: \"%s\"\n", to_string_ascii(input_s_copy, STR_LEN), input_len[i], to_string_ascii(result, STR_LEN), to_string_ascii(expected, STR_LEN));
		i++;
	}
	reset_color();
}
