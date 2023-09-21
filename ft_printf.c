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

# include "libftprintf.h"
/*
 * funcion variadica
*/

int	check_type_input(char format, ...)
{
	int	retorno_write;
	int	total_bytes_read;

	total_bytes_read = 0;
	if (format == 'c')
		retorno_write = ft_putchar(args);
	else if (format == 's')
		retorno_write = ;
	/*else if (format == 'p')
		retorno_write = ;
	else if (format == 'd')
		retorno_write = ;
	else if (format == 'i')
		retorno_write = ;
	else if (format == 'u')
		retorno_write = ;
	else if (format == 'x')
		retorno_write = ;
	else if (format == 'X')
		retorno_write = ;
	else if (format == '%')
		retorno_write = ;
		*/
}

int		ft_printf(char const *fmt, ...)
{
	va_list	args;
	int		retorno_check_input;

	va_start(args, fmt);
	retorno_check_input = 0;

	while (*fmt)
	{
		if (fmt == '%')
		{
			++fmt;
			retorno_check_input = check_type_input(*fmt, args); 
			if ( retorno_check_input == -1)
				break;
			++fmt;
		}
		else
		{
			write(1, fmt, 1);
			++fmt;
		}
	}
	va_end(args);
}