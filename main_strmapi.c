/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:49:03 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 12:34:01 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 4

char	change_case_if_even(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		if (ft_isalpha(c))
		{
			if (c >= 'a' && c <= 'z')
				return (ft_toupper(c));
			else
				return (ft_tolower(c));
		}
	}
	return (c);
}

char	addOne(unsigned int i, char c)
{
	return (i + c);
}

int	main(void)
{
	char	*input_str[SIZE] = {"aaaaa", "AAAAA", "aAaAa", "AaAaA"};
	char	*expected[SIZE] = {"AaAaA", "aAaAa", "AAAAA", "aaaaa"};
	char	*expected_addone[SIZE] = {"abcde", "ABCDE", "aBcDe", "AbCdE"};
	char	*result;
	int		i;

	printf("Function: ft_strmapi\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_strmapi(input_str[i], change_case_if_even);
		if (!strcmp(result, expected[i]))
			set_green();
		else
			set_red();
		printf("Input str: \"%s\"; Input function: change_case_if_even; Result: \"%s\"; Expected: \"%s\"\n", input_str[i], result, expected[i]);
		i++;
		reset_color();
	}
	i = 0;
	while (i < SIZE)
	{
		result = ft_strmapi(input_str[i], addOne);
		if (!strcmp(result, expected_addone[i]))
			set_green();
		else
			set_red();
		printf("Input str: \"%s\"; Input function: addOne; Result: \"%s\"; Expected: \"%s\"\n", input_str[i], result, expected_addone[i]);
		i++;
		reset_color();
	}
}
