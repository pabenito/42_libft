/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:35:17 by pbenito-          #+#    #+#             */
/*   Updated: 2024/03/15 08:12:49 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE 5

int	main(void)
{
	char	*input[SIZE] = {"Hello, world!", "Test String", "", "12345", "Last test\t"};
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
		ft_putstr_fd(input[i], fds[i]);
		close(fds[i]);
		sprintf(filename, "temp_file_%d.txt", i);
		fd = open(filename, O_RDONLY);
		read(fd, buffer, strlen(input[i]));
		buffer[strlen(input[i])] = '\0';
		if (strcmp(buffer, input[i]) == 0)
			set_green();
		else
			set_red();
		printf("Input: \"%s\"; Result: \"%s\"\n", input[i], buffer);
		close(fd);
		reset_color();
	}
	for (i = 0; i < SIZE; i++)
	{
		sprintf(filename, "temp_file_%d.txt", i);
		remove(filename);
	}
}
