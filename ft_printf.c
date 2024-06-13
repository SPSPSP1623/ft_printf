/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonp <simonp@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:38:33 by simonp            #+#    #+#             */
/*   Updated: 2024/06/04 16:04:17 by simonp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			count += ft_format_id(s[i], args);
		}
		else
			count += ft_print_c(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	ft_printf("ma lettre preferee est la suivante : %s %s %d %c", "simon pld", "jeanmichel", 12, 'q');
	printf("\n%c\n", 'a');
}*/