/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:36:42 by dasalaza          #+#    #+#             */
/*   Updated: 2023/10/01 17:52:28 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_nbr(unsigned int nbr, int *counter_len, char *base)
{
	if (nbr >= 16 && *counter_len != -1)
		ft_puthexa_nbr(nbr / 16, counter_len, base);
	if (*counter_len != -1 && ft_putchar_n(base[nbr % 16], counter_len) == -1)
		*counter_len = -1;
}
