/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:20:36 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/19 18:21:28 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by daruuu on 9/19/23.
//
#include "libftprintf.h"

int ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        ft_putchar(i, str);
    i++;
    return (i);
}