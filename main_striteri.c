/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:49:03 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 12:48:33 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 4

void	change_case_if_even(unsigned int index, char *c)
{
	if (index % 2 == 0)
	{
		if (ft_isalpha(*c))
		{
			if (*c >= 'a' && *c <= 'z')
				*c = ft_toupper(*c);
			else
				*c = ft_tolower(*c);
		}
	}
}

void	addOne(unsigned int i, char *c)
{
	*c += i;
}

int	main(void)
{
	char	*input_str[SIZE] = {"aaaaa", "AAAAA", "aAaAa", "AaAaA"};
	char	*expected[SIZE] = {"AaAaA", "aAaAa", "AAAAA", "aaaaa"};
	char	*expected_addone[SIZE] = {"abcde", "ABCDE", "aBcDe", "AbCdE"};
	char	*input_cpy;
	char	*input_bak;
	int		i;

	printf("Function: ft_striteri\n");
	i = 0;
	while (i < SIZE)
	{
		input_cpy = strdup(input_str[i]);
		input_bak = strdup(input_str[i]);
		ft_striteri(input_cpy, change_case_if_even);
		if (!strcmp(input_cpy, expected[i]))
			set_green();
		else
			set_red();
		printf("Input str: \"%s\"; Input function: change_case_if_even; Result: \"%s\"; Expected: \"%s\"\n", input_bak, input_cpy, expected[i]);
		i++;
		reset_color();
	}
	i = 0;
	while (i < SIZE)
	{
		input_cpy = strdup(input_str[i]);
		input_bak = strdup(input_str[i]);
		ft_striteri(input_cpy, addOne);
		if (!strcmp(input_cpy, expected_addone[i]))
			set_green();
		else
			set_red();
		printf("Input str: \"%s\"; Input function: addOne; Result: \"%s\"; Expected: \"%s\"\n", input_bak, input_cpy, expected_addone[i]);
		i++;
		reset_color();
	}
}
