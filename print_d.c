/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:02:12 by johii             #+#    #+#             */
/*   Updated: 2023/07/13 15:04:53 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//return (print_d(-n, base) + 1); \\+1 for '-'//

int	print_d(long n, int base)
{
	int		len;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_d(-n, base) + 1);
	}
	if (n < base)
		return (print_c(symbols[n]));
	else
	{
		len = print_d(n / base, base);
		return (len + print_d(n % base, base));
	}
}
