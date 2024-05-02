/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:26:09 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 11:10:13 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 7

int	main(void)
{
	int		input[SIZE] = {     0,   1,   -1,   10,   -10,   2147483647,   -2147483648};
	char	*expected[SIZE] = {"0", "1", "-1", "10", "-10", "2147483647", "-2147483648"};
	char	*result;
	int		i;

	printf("Function: ft_itoa\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_itoa(input[i]);
		if (!strcmp(result, expected[i]))
			set_green();
		else
			set_red();
		printf("Input: %d; Result: \"%s\"; Expected: \"%s\"\n", input[i], result, expected[i]);
		i++;
		reset_color();
	}
}
