/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:39:00 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/26 23:50:44 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>	/* libreria de argument lists*/
# include <stdlib.h>	/* malloc, free*/
# include <unistd.h>	/* write*/
# include <stdio.h>		/* test printf*/
# include <stdarg.h>	/* argumentos variadicos*/

int		        ft_printf(char const *format, ...);
void			ft_putchar(int c, size_t counter_len);
size_t          ft_strlen(char *s);
void			ft_putstr(char *str, size_t *counter_len);
int             ft_putnbr_aux(va_list args);
unsigned int	ft_put_unsigned_nbr(va_list args);

#endif
