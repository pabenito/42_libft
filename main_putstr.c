/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:11:42 by pbenito-          #+#    #+#             */
/*   Updated: 2024/03/15 08:24:14 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include "stdio.h"

#define SIZE 5

int	main(void)
{
	char	*input[SIZE] = {"Hello, world!", "Test String", "", "12345", "Last test\t!"};
	int		i;

	i = 0;
	while (i < SIZE)
	{
		ft_putstr(input[i]);
		printf("\n");
		i++;
	}
	return (0);
}
