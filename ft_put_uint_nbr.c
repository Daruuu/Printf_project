/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uint_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:58:13 by dasalaza          #+#    #+#             */
/*   Updated: 2023/10/01 17:35:16 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
static int    ft_put_u_nbr(unsigned int nbr)
{
    int	digit_count;
	char	digit;

	digit_count = 0;
	digit = 0;
    if (nbr > 9)
        digit_count += ft_put_u_nbr(nbr / 10);
//        ft_put_u_nbr(nbr % 10);

	digit = nbr % 10 + '0';
	write(1, &digit, 1);
	digit_count++;
	return (digit_count);
}
*/
void	ft_put_uint_nbr(unsigned int nbr, int *counter_len)
{
	if (nbr >= 10)
		ft_put_uint_nbr(nbr / 10, counter_len);
	ft_putchar_n(nbr % 10 + '0', counter_len);
	if (*counter_len < 0)
		return ;
}
