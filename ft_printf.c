/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:19:20 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/19 18:11:18 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
 * funcion variadica
 *
*/

int	check_type_input(char format, va_arg())
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


int		ft_printf(char const * , ...)
{

	va_list	args;

	
	if ()


}
