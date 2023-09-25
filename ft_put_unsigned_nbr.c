/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:58:13 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/25 17:26:10 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int    ft_put_u_nbr(unsigned int nbr)
{
    int	digit_count;
	char	digit;

	digit_count = 0;
	digit = 0;
    if (nbr > 9)
    {
        digit_count += ft_put_u_nbr(nbr / 10);
//        ft_put_u_nbr(nbr % 10);
    }
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
	digit_count++;
	return (digit_count);
}

unsigned int    ft_put_unsigned_nbr(va_list args)
{
    unsigned int    n;

    n = (unsigned int) va_arg(args, unsigned int);
    return ((unsigned int)ft_put_u_nbr(n));
}
