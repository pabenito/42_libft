/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:26:36 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/02 19:42:02 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 6
#define STR_LEN 5

int	main(void)
{
	char	*input_src[SIZE] = {"", "a", "ab", "abcd", "abcde", "abcdef"};
	char	input_dst[STR_LEN];
	char	*expected[SIZE] = {"", "a", "ab", "abcd", "abcd", "abcd"};
	int i;

	printf("Function: ft_strlcpy\n");
	i = 0;
	while (i < SIZE)
	{
		ft_strlcpy(input_dst, input_src[i], STR_LEN);
		if (!strcmp(input_dst, expected[i]))
			set_green();
		else
			set_red();
		printf("Input src: \"%s\"; Input n: %d; Result: \"%s\"; Expected: \"%s\"\n", input_src[i], STR_LEN, input_dst, expected[i]);
		i++;
	}
	reset_color();
}
