/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinliang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:32:03 by jinliang          #+#    #+#             */
/*   Updated: 2025/05/23 17:53:30 by jinliang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	char	*str;
	int		len;

	str = ft_utoa_base(n, 10, 0);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}
