/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:08:44 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 13:31:56 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE 4

int	main(void)
{
	char	input[SIZE] = {' ', '\\', 'a', '\t'};
	int		fds[SIZE];
	char	buffer[2];
	int		i;
	int		fd;
	char	filename[20];

	for (i = 0; i < SIZE; i++)
	{
		sprintf(filename, "temp_file_%d.txt", i);
		fds[i] = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	}
	printf("Function: ft_putchar_fd\n");
	for (i = 0; i < SIZE; i++)
	{
		ft_putchar_fd(input[i], fds[i]);
		close(fds[i]);
		sprintf(filename, "temp_file_%d.txt", i);
		fd = open(filename, O_RDONLY);
		read(fd, buffer, 1);
		buffer[1] = '\0';
		if (buffer[0] == input[i])
			set_green();
		else
			set_red();
		printf("Input: '%c'; Result: \"%s\"; Expected: '%c'\n", input[i],
			buffer, input[i]);
		close(fd);
		reset_color();
	}
	for (i = 0; i < SIZE; i++)
	{
		sprintf(filename, "temp_file_%d.txt", i);
		remove(filename);
	}
}
