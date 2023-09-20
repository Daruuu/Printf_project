/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:39:00 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/20 19:49:59 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>	/* libreria de argument lists*/
# include <stdlib.h>	/* malloc, free*/
# include <unistd.h>	/* write*/
# include <stdio.h>		/* test printf*/
# include <stdarg.h>	/* argumentos variadicos*/


int		ft_printf(char const *, ...);
int     *ft_putchar(int c, int *len);
void	ft_print_number(int	number);
int		ft_putstr(char	*str);


#endif
