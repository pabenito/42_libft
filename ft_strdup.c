/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:26:18 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/27 18:30:47 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;

	dup = (char *) malloc((ft_strlen(str) + 1) * sizeof(char));
	if (dup != NULL)
		ft_memcpy(dup, str, ft_strlen(str) + 1);
	return (dup);
}
