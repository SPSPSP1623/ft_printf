/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonp <simonp@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 04:11:19 by simonp            #+#    #+#             */
/*   Updated: 2024/06/02 19:33:22 by simonp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_print_u(nb / 10);
	count += ft_print_c(nb % 10 + '0');
	return (count);
}
