/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinliang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:15:03 by jinliang          #+#    #+#             */
/*   Updated: 2025/05/23 18:10:43 by jinliang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		print_conversion(char specifier, va_list args);
size_t	ft_strlen(const char *str);

/* Print functions */
int		print_char(char c);
int		print_str(char *s);
int		print_int(int n);
int		print_unsigned(unsigned int n);
int		print_hex(unsigned int n, int uppercase);
int		print_ptr(void *ptr);
int		print_percent(void);

/* Conversion utils */
char	*ft_itoa_base(int n, int base);
char	*ft_utoa_base(unsigned long n, int base, int uppercase);

#endif
