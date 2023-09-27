/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:39:00 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/28 00:10:19 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>	/* libreria de argument lists*/
# include <stdlib.h>	/* malloc, free*/
# include <unistd.h>	/* write*/
# include <stdio.h>		/* test printf*/
# include <stdarg.h>	/* argumentos variadicos*/

void			ft_printf(char const *format, ...);
void			ft_putchar(int c, size_t *counter_len);
size_t          ft_strlen(char *str);
void			ft_putstr(char *str, size_t *counter_len);
int             ft_putnbr_n(int nbr, size_t *counter_len);
void			ft_put_unsigned_nbr(unsigned int nbr, size_t *counter_len);
void			ft_puthexa_nbr(int nbr, size_t *counter_len, char *base);

#endif
