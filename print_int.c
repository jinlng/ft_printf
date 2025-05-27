/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinliang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:27:30 by jinliang          #+#    #+#             */
/*   Updated: 2025/05/23 17:53:32 by jinliang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int n)
{
	char	*str;
	int		len;

	str = ft_itoa_base(n, 10);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}
