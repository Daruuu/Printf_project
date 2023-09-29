/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:39:00 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/30 01:37:31 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>	/* libreria de argument lists*/
#include <stdlib.h>	/* malloc, free*/
#include <unistd.h>	/* write*/
#include <stdio.h>	/* test printf*/
#include <stdarg.h>	/* argumentos variadicos*/

int				ft_printf(char const *format, ...);
int				ft_putchar_n(char c, int *counter_len);
int				ft_strlen_n(char *str);
void			ft_putstr(char *str, int *counter_len);
void			ft_putnbr_n(int nbr, int *counter_len);
void			ft_put_uint_nbr(unsigned int nbr, int *counter_len);
void			ft_puthexa_nbr(unsigned long nbr, int *counter_len);
void			ft_put_ptr(unsigned long nbr, int *counter_len);

#endif
