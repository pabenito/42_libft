/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:30:27 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/16 14:54:32 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	size_t			i;

	if (src == dst)
		return (dst);
	dst_aux = (unsigned char *)dst;
	src_aux = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_aux[i] = src_aux[i];
		i++;
	}
	return (dst);
}
