/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonp <simonp@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 21:52:22 by simonp            #+#    #+#             */
/*   Updated: 2024/06/04 15:34:24 by simonp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_format_id(const char format_id, va_list args);
int	ft_print_c(char c);
int	ft_print_s(char *s);
int	ft_print_di(int nb);
int	ft_print_x(unsigned int nb, const char format_id);
int	ft_print_u(unsigned int nb);
int	ft_print_p(void *arg);

#endif