/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:20:36 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/27 15:48:21 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
int ft_putstr(va_list args)
{
    char    *str;
    int     len;

    str = va_arg(args, char *);
    len = (int) ft_strlen(str);
    if (!str)
        return (0);
    return ((int) write(1, str, len));
}
*/
void	ft_putstr(char *str, size_t counter_len)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar(*str, counter_len);
			str++;
			counter_len++;
	}
}
