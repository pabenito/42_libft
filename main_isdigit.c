/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:21:05 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/12 19:14:58 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>

#define SIZE 4

int	main(void)
{
	char	input[SIZE] = {'0', '9', 'a', '\0'};
	int		expected[SIZE] = {1, 1, 0, 0};
	int		result;
	int		i;

	printf("Function: ft_isalpha\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_isdigit(input[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input: '%c'; Result: %d; Expected: %d\n", input[i], result, expected[i]);
		i++;
	}
	reset_color();
}
