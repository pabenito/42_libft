/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 07:53:44 by pbenito-          #+#    #+#             */
/*   Updated: 2024/03/15 08:19:11 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(const char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 0;
	while (i < len && ft_putchar(str[i]))
		i++;
	return (0);
}
