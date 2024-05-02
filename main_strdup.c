/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:03:45 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/27 18:37:59 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 5

int	main(void)
{
	char	*input_str[SIZE] = {NULL, "", "a", " ", "1"};
	char	*expected[SIZE] = {NULL, "", "a", " ", "1"};
	char	*result;
	int i;

	printf("Function: ft_strdup\n");
	i = 1;
	while (i < SIZE)
	{
		result = ft_strdup(input_str[i]);
		if (strcmp(result, expected[i]) == 0)
			set_green();
		else
			set_red();
		printf("Input str: \"%s\"; Result: \"%s\"; Expected: \"%s\"\n", input_str[i], result, expected[i]);
		i++;
	}
	reset_color();
}
