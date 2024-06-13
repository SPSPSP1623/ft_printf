/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonp <simonp@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:01:26 by simonp            #+#    #+#             */
/*   Updated: 2024/06/04 15:47:48 by simonp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long arg)
{
	int	count;
	char	*hexa;

	count = 0;
	hexa = "0123456789abcdef";
	if (arg > 15)
	{
		count += ft_hexa(arg / 16);
		count += ft_hexa(arg % 16);
	}
	else
		count += ft_print_c(hexa[arg]);
	return (count);
}

int	ft_print_p(void *arg)
{
	int	count;
	unsigned long	arg2;

	count = 0;
	arg2 = (unsigned long)arg;
	if (arg == 0)
		return (write(1, "(nil)", 5));
	count += ft_print_s("0x");
	count += ft_hexa(arg2);
	return (count);
}
