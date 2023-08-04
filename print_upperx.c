/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_upperx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:32:56 by johii             #+#    #+#             */
/*   Updated: 2023/07/13 13:14:09 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_upperx(long n, int base)
{
	int		len;
	char	*symbols;

	symbols = "0123456789ABCDEF";
	if (n < base)
		return (print_c(symbols[n]));
	else
	{
		len = print_upperx(n / base, base);
		return (len + print_upperx(n % base, base));
	}
}
