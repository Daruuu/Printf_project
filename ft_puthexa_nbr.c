/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:05:30 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/29 11:04:53 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_puthexa_nbr(int nbr, size_t *counter_len, char *base)
{
	unsigned int	number;

	number = nbr;

	if (number >= 16 && *counter_len != -1)
		ft_puthexa_nbr(number / 16, counter_len, base);
	if (*counter_len != -1 && ft_putchar((number % 16), counter_len) == -1)
		*counter_len = -1;
}
