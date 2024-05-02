/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 07:29:53 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 13:03:35 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>
#include <string.h>

#define SIZE 8

int	compare_splits(char **result, char **expected)
{
	int	i;

	if (!result && !expected)
		return (1);
	i = 0;
	while (result[i] && expected[i])
	{
		if (strcmp(result[i], expected[i]))
		{
			set_red();
			//printf("Different. Index: %d; Result: \"%s\"; Expected: \"%s\"\n", i, result[i], expected[i]);
			reset_color();
			return (0);
		}
		i++;
	}
	if (!result[i] && !expected[i])
		return (1);
	else
		return (0);
}

void	print_splits(char **splits)
{
	int	i;

	if (!splits)
		printf("NULL\n");
	i = 0;
	while (splits[i])
	{
		printf("%d: \"%s\"\n", i, splits[i]);
		i++;
	}
}

int	main(void)
{
	char	*input_str[SIZE] = {NULL, "abrakadabra", "",  "bra", "br", "aabraakaa", "br", "      split       this for   me  !       "};
	char	input_chr[SIZE] = {' ',   'a',           ' ', 'a',   'a',  'a',         0,    ' '};
	char	*expected0[] = {NULL};
	char	*expected1[] = {"br", "k", "d", "br", NULL};
	char	*expected2[] = {NULL};
	char	*expected3[] = {"br", NULL};
	char	*expected4[] = {"br", NULL};
	char	*expected5[] = {"br", "k", NULL};
	char	*expected6[] = {"br", NULL};
	char	*expected7[] = {"split", "this", "for", "me", "!", NULL};
	char	**expected[SIZE] = {expected0, expected1, expected2, expected3, expected4, expected5, expected6, expected7};
	char	**result;
	int		i;

	//printf("Function: ft_split\n");
	i = 1;
	while (i < SIZE)
	{
		result = ft_split(input_str[i], input_chr[i]);
		printf("Result\n");
		print_splits(result);
		printf("Expected\n");
		print_splits(expected[i]);
		if (compare_splits(result, expected[i]))
			set_green();
		else
			set_red();
		printf("Input str: \"%s\"; Input char: '%c'\n", input_str[i], input_chr[i]);
		reset_color();
		i++;
	}
}
