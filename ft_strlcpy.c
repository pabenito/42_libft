/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:10:22 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/02 19:51:56 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (dstsize <= 0)
		return (len);
	else if (len < dstsize)
		ft_memmove(dst, src, len + 1);
	else
	{
		ft_memmove(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (len);
}
