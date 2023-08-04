/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:17:51 by johii             #+#    #+#             */
/*   Updated: 2023/07/13 15:19:55 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	print_format(char format, va_list ap);
int	print_checker(char c, va_list ap, int len);
int	print_s(char *str);
int	print_c(int c);
int	print_d(long n, int base);
int	print_upperx(long n, int base);
int	print_p(uintptr_t ptr);

#endif
