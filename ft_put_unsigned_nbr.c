/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:58:13 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/24 15:16:58 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static unsigned int    ft_put_u_nbr(unsigned int nbr)
{
    int digit;

    if (nbr > 9)
        ft_put_u_nbr(nbr / 10);
    else
    {
        digit = nbr + '0';
        write(1, &digit, 1);
    }
    return (nbr);
}

unsigned int    ft_put_unsigned_nbr(va_list args)
{
    unsigned int    n;

    n = (unsigned int) va_arg(args, unsigned int);
    return (ft_put_u_nbr(n));
}

