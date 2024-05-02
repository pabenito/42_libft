/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:34:27 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/28 10:14:48 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	strlen;
	unsigned int	size;

	strlen = ft_strlen(s);
	if (start >= strlen)
	{
		sub = (char *) malloc(sizeof(char));
		if (sub != NULL)
			sub[0] = '\0';
		return (sub);
	}
	if (start + len >= strlen)
		size = strlen - start + 1;
	else
		size = len + 1;
	sub = (char *) malloc(size * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, &s[start], size);
	return (sub);
}
