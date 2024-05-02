/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:35:23 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/28 10:42:06 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		size;
	char	*join;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	size = s1_len + s2_len + 1;
	join = (char *) malloc(size * sizeof(char));
	if (join == NULL)
		return (NULL);
	ft_memcpy(join, s1, s1_len);
	ft_strlcpy(&join[s1_len], s2, s2_len + 1);
	return (join);
}
