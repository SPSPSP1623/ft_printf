/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonp <simonp@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 22:45:34 by simonp            #+#    #+#             */
/*   Updated: 2024/06/04 15:32:04 by simonp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_id(const char format_id, va_list args)
{
	int	count;

	count = 0;
	if (format_id == 'c')
		count += (char)ft_print_c(va_arg(args, int));
	if (format_id == 's')
		count += ft_print_s(va_arg(args, char *));
	if (format_id == 'p')
		count += ft_print_p(va_arg(args, void *));
	if (format_id == 'd' || format_id == 'i')
		count += ft_print_di(va_arg(args, int));
	if (format_id == 'u')
		count += ft_print_u(va_arg(args, unsigned int));
	if (format_id == 'x' || format_id == 'X')
		count += ft_print_x(va_arg(args, int), format_id);
	if (format_id == '%')
		count += ft_print_c('%');
	return (count);
}
