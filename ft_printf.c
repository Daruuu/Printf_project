/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:19:20 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/24 16:23:01 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"
/*
 * funcion variadica
*/
int  check_type_input(char format, va_list args)
{
	int	retorno_write;
//	int	total_bytes_read;

//	total_bytes_read = 0;
    retorno_write = 0;
	if (format == 'c')
		retorno_write = ft_putchar(args);
	else if (format == 's')
		retorno_write = ft_putstr(args);
/*	else if (format == 'p')
		retorno_write = ;*/
	else if (format == 'd' || format == 'i')
		// retorno_write = ft_putnbr_aux(args);
		// retorno_write = ft_putnbr(100);
	// else if (format == 'u')
		// retorno_write = ft_put_unsigned_nbr(args);
	/*else if (format == 'x')
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
			if (chars_printed == -1)
				break;
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
	/*
    printf("test char:\n");
    ft_printf("%c\n", ' ');
    ft_printf("%c\n", 'z');
    ft_printf("%c\n", '!');
    printf("---------------\n");
	*/
/*
    printf("test STRING:\n");
    ft_printf("%s\n", "hello");
    ft_printf("%s\n", "123-hello");
    ft_printf("%s\n", "5555-qwerty!");
*/
/*
    unsigned int test01 = 0;
    unsigned int test02 = -1;
    unsigned int test03 = 100;
    unsigned int test04 = 123456789;
    unsigned int test05 = 4294967295;
    printf("test UNSIGNED INT:\n");
    ft_printf("%u\n", test01);
    ft_printf("%u\n", test02);
    */
//    ft_printf("%u\n", test03);
//    ft_printf("%u\n", test04);
//    ft_printf("%u\n", test05);

    return (0);
}
