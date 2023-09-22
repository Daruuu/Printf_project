/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:54:21 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/22 21:18:51 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by dsc on 21/09/2023.
//

# include "libftprintf.h"

size_t  ft_strlen(char *s)
{
    size_t  len;

    if (!s)
        return (size_t) (NULL);
    len = 0;
    while (*s++)
        ++len;
    return (len);
}

/*
int main()
{
    char    *str;
    str = " \nhe~llo world";
//    str = " ";
    printf("%d\n",ft_strlen(str));
}
*/
