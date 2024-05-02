/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:19:28 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 14:11:35 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


char	*to_string_ascii(const char *mem, int len)
{
	char	*str;
	int		i;
	int		pos;

	str = (char *)malloc(sizeof(char) * 6 * len + 1);
	pos = 0;
	i = 0;
	while (i < len)
	{
		if (isprint(mem[i]))
		{
			str[pos] = mem[i];
			pos++;
		}
		else
			pos += sprintf(&str[pos], "\\[%d]", mem[i]);
		i++;
	}
	str[pos] = '\0';
	return (str);
}

void	strfill(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
}

int	count_not_printable(const char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!isprint(str[i]))
			count++;
		i++;
	}
	return (count);
}

char	*str_print_not_printable(const char *str)
{
	char	*str_print;
	int		count;
	int		len;
	int		size;
	int		i;
	int		j;

	count = count_not_printable(str);
	len = strlen(str);
	size = count * 5 + len + 1;
	str_print = (char *) malloc(size * sizeof(char));
	i = 0;
	j = 0;
	while (i < len)
	{
		if(isprint(str[i]))
		{
			str_print[j] = str[i];
			j++;
		}
		else
			j += sprintf(&str_print[j], "\\[%d]", str[i]);
		i++;
	}
	return (str_print);
}
