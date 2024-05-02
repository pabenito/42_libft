/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:25:26 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/02 19:00:54 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	size_t			i;

	if (src == dst)
		return (dst);
	dst_aux = (unsigned char *)dst;
	src_aux = (unsigned char *)src;
	if (src > dst)
		ft_memcpy(dst, src, n);
	else
	{
		i = n - 1;
		while (i < n)
		{
			dst_aux[i] = src_aux[i];
			i--;
		}
	}
	return (dst);
}
