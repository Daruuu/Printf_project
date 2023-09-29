/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 01:02:04 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/30 01:03:22 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

static void	ft_print_ptr(unsigned long nbr, int *counter_len)
{
	char	*base;

	base = "0123456789abcdef";
	if (*counter_len != -1)
	{
		if (nbr >= 16 && *counter_len != -1)
			ft_print_ptr(nbr / 16, counter_len);
		if (*counter_len != -1 && ft_putchar_n(base[nbr % 16], counter_len) == -1)
			*counter_len = -1;
	}
}

void	ft_put_ptr(unsigned long nbr, int *counter_len)
{
	ft_putstr("0x", counter_len);
	ft_print_ptr(nbr, counter_len);
}
