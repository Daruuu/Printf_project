/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:34:28 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/18 20:43:42 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		*ft_putcharr(int c, int *len)
{
	write(1, &c, 1);
	(*len)++;
	return (len);
}

int	main ()
{
	int	*len;

	int length = 0;

    int *p_length = ft_putchar('a', &length);

    printf("Longitud: %d\n", *p_length); // Debería imprimir "Longitud: 1"

    p_length = ft_putchar('b', p_length); // Pasamos el puntero p_length para actualizarlo.

    printf("Longitud: %d\n", *p_length); // Debería imprimir "Longitud: 2"
	int	c = 65;
    return (0);
}
