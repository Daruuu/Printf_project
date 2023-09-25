/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:34:28 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/25 19:12:58 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_putchar(va_list args)
{
    char c;
    c = (char) va_arg(args, int);
    if (!c)
        return (0);
	return ((int)write(1, &c, 1));
}
/*
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
}*/
