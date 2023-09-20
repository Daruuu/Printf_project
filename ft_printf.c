/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:19:20 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/20 21:36:08 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
 * funcion variadica
 *
*/

int	check_type_input(char format, va_ar)
{
	int	option;

	if (format == 'c')
		option = ft_putchar();
	else if (format == 's')
		option = ;
	else if (format == 'p')
		option = ;
	else if (format == 'd')
		option = ;
	else if (format == 'i')
		option = ;
	else if (format == 'u')
		option = ;
	else if (format == 'x')
		option = ;
	else if (format == 'X')
		option = ;
	else if (format == '%')
		option = ;
}

int		ft_printf(char const *fmt, ...)
{
	va_list	args;
	int		format;
	
	va_start(args, fmt);
	check_type_input(args, );


	
	va_end(args);


}
