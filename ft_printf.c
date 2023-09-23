/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:19:20 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/23 13:08:25 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"
/*
 * funcion variadica
*/

static int  check_type_input(char format, va_list args)
{
	int	retorno_write;
//	int	total_bytes_read;

//	total_bytes_read = 0;
    retorno_write = 0;
	if (format == 'c')
		retorno_write += ft_putchar(args);
	else
//        if (format == 's')
		retorno_write += ft_putstr(args);
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
    return (retorno_write);
}

int     ft_printf(char const *format, ...)
{
	va_list	args;
	int		chars_printed;

	va_start (args, format);
    chars_printed = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
            chars_printed = check_type_input(*format, args);
/*      if (chars_printed == -1)
				break;
*/
			format++;
		}
		else
		{
			write(1, format, 1);
            chars_printed++;
            format++;
		}
	}
	va_end(args);
    return (chars_printed);
}

int main()
{
    char c04;

    c04 = '~';
//    printf("test char:\n");

    ft_printf("%c\n", 'a');
/*
    ft_printf("%c\n", 'z');
    ft_printf("%c\n", '!');
    ft_printf("%c\n", c04);
*/
    return (0);
}