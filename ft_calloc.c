/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:51:19 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/27 17:57:59 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}
