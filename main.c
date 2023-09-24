/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:51:55 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/24 14:45:43 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/*
void    foo(char *fmt, ...)
{
    va_list args;
    int d;
    char c, *s;

    va_start(args, fmt);
    while (*fmt)
        switch (*fmt++) {
        case 's':*/
/* string *//*

            s = va_arg(args, char *);
            printf("string %s\n", s);
            break;
        case 'd':              */
/* int *//*

            d = va_arg(args, int);
            printf("int %d\n", d);
            break;
        case 'c':              */
/* char *//*

            */
/* need a cast here since va_arg only
               takes fully promoted types *//*

            c = (char) va_arg(args, int);
            write(1, &c, sizeof(char));
            break;
        }
    va_end(args);
}
*/

int main()
{
//    foo("%s\n %c", "abcde", 'a');
    int             i;
    unsigned int    j;

    i = -1;
    j = -1;
    printf("%u\n", i);
    printf("%u\n", j);
    i = -2;
    j = -0;
    printf("%u\n", i);
    printf("%u\n", j);
}