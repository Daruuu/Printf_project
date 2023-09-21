/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:20:36 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/20 19:46:46 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by daruuu on 9/19/23.
//
#include "libftprintf.h"

int ft_putstr(va_list args)
{
    char    *str;
    size_t  len;

    str = va_arg(args, char *);
    len = ft_strlen(str);
    return ((int) write(1, str, len));
}