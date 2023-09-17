/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:39:00 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/17 16:39:00 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>	/* libreria de argument lists*/
# include <stdlib.h>	/* malloc, free*/
# include <unistd.h>	/*write*/

int		ft_printf(char const *, ...);

#endif