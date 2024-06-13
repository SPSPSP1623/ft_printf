/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonp <simonp@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 22:46:40 by simonp            #+#    #+#             */
/*   Updated: 2024/06/04 12:13:34 by simonp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char *s)
{
	int	count;
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		count += ft_print_c(s[i]);
		i++;
	}
	return (count);
}
