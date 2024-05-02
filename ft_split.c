/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 06:37:38 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 17:27:31 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_splits(char const *s, char c)
{
	int		splits;
	int		i;
	int		len;
	char	*next;

	splits = 0;
	i = 0;
	while (s[i] != '\0')
	{
		next = ft_strchr(&s[i], c);
		if (next == NULL)
		{
			if (s[i])
				splits++;
			return (splits);
		}
		len = next - &s[i];
		if (len)
			splits++;
		i += len + 1;
	}
	return (splits);
}

char	*get_next_split(char const *s, char c, int *i)
{
	char	*split;
	char	*next;
	int		len;

	while (s[*i] == c)
		(*i)++;
	next = ft_strchr(&s[*i], c);
	len = next - &s[*i];
	split = ft_substr(s, *i, len);
	*i += len + 1;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	int		splits_counter;
	int		str_counter;
	char	**splits;
	char	*split;

	if (!s || s[0] == '\0')
		size = 1;
	else if (c == '\0')
		size = 2;
	else
		size = count_splits(s, c) + 1;
	splits = (char **) malloc(size * sizeof(char *));
	if (!splits)
		return (NULL);
	splits_counter = 0;
	str_counter = 0;
	while (splits_counter < size - 1)
	{
		split = get_next_split(s, c, &str_counter);
		splits[splits_counter] = split;
		splits_counter++;
	}
	splits[splits_counter] = NULL;
	return (splits);
}
