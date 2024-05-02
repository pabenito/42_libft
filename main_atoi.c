/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:24:00 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/27 17:49:34 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>

#define SIZE 9

int	main(void)
{
	char	*input[SIZE] = {"", " 1", "+1", "-1", " +1", " -1", "10", "11", "1a"};
	int		expected[SIZE] = {0, 1, 1, -1, 1, -1, 10, 11, 1};
	int		result;
	int		i;

	printf("Function: ft_atoi\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_atoi(input[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input: \"%s\"; Result: %d; Expected: %d\n", input[i], result, expected[i]);
		i++;
	}
	reset_color();
}
