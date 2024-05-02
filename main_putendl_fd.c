/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:41:46 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 14:11:00 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./_main_utils.h"
#include "./libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE 5

void	printfln(const char *s)
{
	while (*s)
	{
		if (*s == '\n')
		{
			printf("\\n");
		}
		else
		{
			putchar(*s);
		}
		s++;
	}
}

int	main(void)
{
	char	*input[SIZE] = {"Hello, world!", "Test String", "", "12345",
			"Last test"};
	int		fds[SIZE];
	char	buffer[50];
	int		i;
	int		fd;
	char	filename[20];

	char expected[SIZE][50];
	i = 0;
	while (i < SIZE)
	{
		sprintf(expected[i], "%s\n", input[i]);
		i++;
	}
	i = 0;
	while (i < SIZE)
	{
		sprintf(filename, "temp_file_%d.txt", i);
		fds[i] = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		i++;
	}
	printf("Function: ft_putendl_fd\n");
	i = 0;
	while (i < SIZE)
	{
		ft_putendl_fd(input[i], fds[i]);
		close(fds[i]);
		sprintf(filename, "temp_file_%d.txt", i);
		fd = open(filename, O_RDONLY);
		read(fd, buffer, strlen(expected[i]));
		buffer[strlen(expected[i])] = '\0';
		if (strcmp(buffer, expected[i]) == 0)
			set_green();
		else
			set_red();
		printf("Input: \"%s\"; Result: \"%s\"; Expected: \"%s\"\n", input[i], str_print_not_printable(buffer), str_print_not_printable(expected[i]));
		close(fd);
		reset_color();
		i++;
	}
	i = 0;
	while (i < SIZE)
	{
		sprintf(filename, "temp_file_%d.txt", i);
		remove(filename);
		i++;
	}
}
