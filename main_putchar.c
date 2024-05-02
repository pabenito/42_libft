/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:07:58 by pbenito-          #+#    #+#             */
/*   Updated: 2024/03/15 08:23:35 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include "stdio.h"

#define SIZE 8

int	main(void)
{
	char	input[SIZE] = {'H', 'o', 'l', 'a', ' ', '\\', '\t', '0'};
	int		i;

	printf("Function: ft_putchar_fd\n");
	i = 0;
	while (i < SIZE)
	{
		ft_putchar(input[i]);
		i++;
	}
	return (0);
}
