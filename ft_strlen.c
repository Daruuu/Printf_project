//
// Created by dsc on 21/09/2023.
//

# include "libftprintf.h"

size_t  ft_strlen(char *s)
{
    if (!s)
        return (NULL);
    size_t  len;
    while (*s++)
        ++len;
    return (len);
}
/*int main()
{
    char    *str;

//    str = "hello world";
    str = "";

    printf("%d\n",ft_strlen(str));
}*/
