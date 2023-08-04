/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:50:25 by johii             #+#    #+#             */
/*   Updated: 2023/07/13 15:31:38 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char format, va_list ap)
{
	int	len;

	len = 0;
	if (format == 'c')
		return (print_c(va_arg(ap, int)));
	if (format == 's')
		return (print_s(va_arg(ap, char *)));
	if (format == 'p')
	{
		write(1, "0x", 2);
		return (print_p(va_arg(ap, uintptr_t)) + 2);
	}
	if (format == 'd' || format == 'i')
		return (print_d((long)va_arg(ap, int), 10));
	if (format == 'u')
		return (print_d((long)va_arg(ap, unsigned int), 10));
	if (format == 'x')
		return (print_d((long)va_arg(ap, unsigned int), 16));
	if (format == 'X')
		return (print_upperx((long)va_arg(ap, unsigned int), 16));
	if (format == '%')
		return (write(1, "%", 1));
	else
		return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, str);
	len = 0;
	while (*str != '\0')
	{
		if (*str == '%')
			len += print_format(*(++str), ap);
		else
			len += write (1, str, 1);
		++str;
	}
	va_end(ap);
	return (len);
}
