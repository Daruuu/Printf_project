/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:53:52 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/27 16:26:52 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_n(int nbr, size_t *counter_len)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_n((nbr / 10), counter_len);
		ft_putchar('8', counter_len);
	}
	else if (nbr < 0)
	{
		ft_putchar('-', counter_len);
		ft_putnbr_n((nbr / 10), counter_len);
	}
	else
	{
		if (nbr > 9)
			ft_putnbr_n((nbr / 10), counter_len);
		ft_putchar((nbr % 10 + '0'), counter_len);
	}
}
