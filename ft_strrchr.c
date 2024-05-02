/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:59:41 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/14 16:05:38 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			ptr = (char *)&str[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (ptr);
}
