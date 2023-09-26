/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:53:52 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/27 00:00:32 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_n(int	nbr, size_t count_len)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_n((nbr / 10), count_len);
	}
	else if (nbr < 0)
	{
		ft_putchar('-', count_len);
		ft_putnbr_n((nbr / 10), count_len);
	}
	else
	{

	}
}


