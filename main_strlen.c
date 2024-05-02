/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:24:00 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/15 17:26:38 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>

#define SIZE 4

int	main(void)
{
	char	*input[SIZE] = {"", " ", "a", "ab"};
	int		expected[SIZE] = {0, 1, 1, 2};
	int		result;
	int		i;

	printf("Function: ft_strlen\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_strlen(input[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input: '%s'; Result: %d; Expected: %d\n", input[i], result, expected[i]);
		i++;
	}
	reset_color();
}
