/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:28:36 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 14:35:15 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE 7

int	digits(int n)
{
	int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

int	is_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int		input[SIZE] = {-2147483648, 2147483647, 0, 1, -1, 10, -10};
	int		fds[SIZE];
	char	buffer[50];
	int		i;
	int		fd;
	char	filename[20];

	for (i = 0; i < SIZE; i++)
	{
		sprintf(filename, "temp_file_%d.txt", i);
		fds[i] = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	}
	printf("Function: ft_putstr_fd\n");
	for (i = 0; i < SIZE; i++)
	{
		ft_putnbr_fd(input[i], fds[i]);
		close(fds[i]);
		sprintf(filename, "temp_file_%d.txt", i);
		fd = open(filename, O_RDONLY);
		read(fd, buffer, digits(input[i]) + is_negative(input[i]));
		buffer[digits(input[i]) + is_negative(input[i])] = '\0';
		if (strcmp(buffer, ft_itoa(input[i])) == 0)
			set_green();
		else
			set_red();
		printf("Input: %d; Result: \"%s\"\n", input[i], buffer);
		close(fd);
		reset_color();
	}
	for (i = 0; i < SIZE; i++)
	{
		sprintf(filename, "temp_file_%d.txt", i);
		remove(filename);
	}
}
