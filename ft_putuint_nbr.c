/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:58:13 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/29 12:42:10 by dasalaza         ###   ########.fr       */
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
void    ft_putuint_nbr(unsigned int nbr, size_t *counter_len)
{
	if (nbr >= 10)
	{
		ft_putuint_nbr(nbr / 10, counter_len);
		if (*counter_len == -1)
			return ;
	}
	ft_putchar(nbr % 10 + '0', counter_len);
	if (*counter_len < 0)
		return ;
}
/*
unsigned int    ft_put_unsigned_nbr(unsigned int nbr, size_t counter_len)
{
    unsigned int    n;

    n = (unsigned int) va_arg(args, unsigned int);
    return ((unsigned int)ft_put_u_nbr(n));
}*/
