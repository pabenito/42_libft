/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:26:36 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/02 20:12:09 by pbenito-         ###   ########.fr       */
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
	char	*input_src[SIZE] = {"", "", "a", "cd", "", "a"};
	char	*input_dst[SIZE] = {"", "a", "", "ab", "abcd", "abcd"};
	char	*expected[SIZE] = {"", "a", "a", "abcd", "abcd", "abcd"};
	char	*dst;
	int i;

	printf("Function: ft_strlcpy\n");
	i = 0;
	while (i < SIZE)
	{
		dst = (char *)malloc(sizeof(char) * STR_LEN);
		strcpy(dst, input_dst[i]);
		ft_strlcat(dst, input_src[i], STR_LEN);
		if (!strcmp(dst, expected[i]))
			set_green();
		else
			set_red();
		printf("Input src: \"%s\"; Input n: %d; Result: \"%s\"; Expected: \"%s\"\n", input_src[i], STR_LEN, dst, expected[i]);
		i++;
	}
	reset_color();
}
