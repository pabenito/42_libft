/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:49:43 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 06:35:06 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	search_init(char const *s, char const *set)
{
	int	i;

	if (set[0] == '\0')
		return (0);
	i = 0;
	while (s[i] != '\0' && char_in_set(s[i], set))
		i++;
	if (s[i] == '\0')
		return (-1);
	return (i);
}

int	search_end(char const *s, char const *set)
{
	int	i;

	if (set[0] == '\0')
		return (ft_strlen(s));
	i = ft_strlen(s) - 1;
	while (i > 0 && char_in_set(s[i], set))
		i--;
	if (i < 0 || (i == 0 && char_in_set(s[i], set)))
		return (-1);
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		init;
	int		end;
	char	*copy;

	if (!s1 || !set)
		return (NULL);
	init = search_init(s1, set);
	end = search_end(s1, set);
	copy = (char *)malloc(sizeof(char) * (end - init + 1));
	if (copy == NULL)
		return (NULL);
	i = init;
	j = 0;
	while (i < end)
	{
		copy[j] = s1[i];
		i++;
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
