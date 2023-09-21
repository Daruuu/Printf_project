/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:31:25 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/20 16:38:17 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by daruuu on 9/20/23.
//
#include "libftprintf.h"

int ft_putnbr(int nbr)
{
    char digit;

    if (nbr == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = nbr * -1;
        ft_putnbr(nbr);
    }
    else if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else if (nbr < 10)
    {
        digit =  nbr + '0';
        write(1, &digit, 1);
    }
    return(0);
}