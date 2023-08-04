/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:34:47 by johii             #+#    #+#             */
/*   Updated: 2023/07/13 15:20:33 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(uintptr_t n)
{
	int		len;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 16)
		return (print_c(symbols[n]));
	else
	{
		len = print_p(n / 16);
		return (len + print_p(n % 16));
	}
}
