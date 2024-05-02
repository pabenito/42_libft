/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:14:06 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/16 11:19:39 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>

#define SIZE 5

int	main(void)
{
	char	input[SIZE] = {32, 126, -1, 31, 127};
	int		expected[SIZE] = {1, 1, 0, 0, 0};
	int		result;
	int		i;

	printf("Function: ft_isprint\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_isprint(input[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input: '%c'; Result: %d; Expected: %d\n", input[i], result, expected[i]);
		i++;
	}
	reset_color();
}
