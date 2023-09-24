/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:31:25 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/24 16:28:12 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int ft_putnbr_kenito(int nbr)
{
	int i;
	char digits[10];

	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	i = 9;
	while (nbr > 0)
	{
		digits[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		--i;
	}

}

void	ft_putnbr(int nbr)
{
    char	digit;

    if (nbr == -2147483648)
        write(1, "-2147483648", 11);
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr * -1;
        ft_putnbr(nbr);
    }
    else if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else if (nbr < 10)
    {
        digit = nbr + '0';
        write(1, &digit, 1);
    }
}

static int ft_len_nbr(int nbr)
{
	int len;

	len = 0;
	if (nbr == -2147483648)
		return (11);
	else if (nbr < 0)
	{
		nbr = nbr * -1;
		++len;
	}
	while (nbr > 0)
	{
		++len;
		nbr = nbr / 10;
	}
	return (len);
}

int ft_putnbr_aux(va_list args)
{
    int i;

    i = (int)va_arg(args, int);
	ft_putnbr(i);
    return (ft_len_nbr(i));
}