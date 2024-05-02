/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:13:52 by pbenito-          #+#    #+#             */
/*   Updated: 2024/01/29 14:14:06 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_UTILS_H
# define MAIN_UTILS_H

void	set_green(void);
void	set_red(void);
void	reset_color(void);
char	*to_string_ascii(const char *mem, int len);
void	strfill(char *str, char c, int len);
char	*str_print_not_printable(const char *str);

#endif