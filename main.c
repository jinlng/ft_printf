/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinliang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:28:27 by jinliang          #+#    #+#             */
/*   Updated: 2025/05/23 17:56:39 by jinliang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int				n;
	char			*str;
	void			*p;
	unsigned int	u;

	n = -42;
	str = "Hello, 42!";
	p = &n;
	u = 4294967295;
	ft_printf("Custom: %%\n");
	ft_printf("Custom: %s\n", str);
	ft_printf("Custom: %d %i\n", n, n);
	ft_printf("Custom: %u\n", u);
	ft_printf("Custom: %x %X\n", u, u);
	ft_printf("Custom: %p\n", p);
	printf("\n--- Reference printf ---\n");
	printf("Original: %%\n");
	printf("Original: %s\n", str);
	printf("Original: %d %i\n", n, n);
	printf("Original: %u\n", u);
	printf("Original: %x %X\n", u, u);
	printf("Original: %p\n", p);
	return (0);
}
