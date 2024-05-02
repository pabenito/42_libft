/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:19:21 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/16 12:23:48 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_lowercase(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_uppercase(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (is_lowercase(c) || is_uppercase(c));
}
