/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonp <simonp@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 22:51:14 by simonp            #+#    #+#             */
/*   Updated: 2024/06/02 19:13:37 by simonp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_di(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		count = 11;
	}
	else if (nb < 0)
	{
		count += ft_print_c('-');
		count += ft_print_di(-nb);
	}
	else if (nb >= 10)
	{
		count += ft_print_di(nb / 10);
		count += ft_print_di(nb % 10);
	}
	else
		count += ft_print_c(nb % 10 + '0');
	return (count);
}
