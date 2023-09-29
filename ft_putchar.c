/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:54:15 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/29 12:02:08 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, size_t *counter_len)
{
	write(1, &c, 1);
	(* counter_len)++;
}
/*int	main()
{
	int	c = 97;
	size_t	ptr_len = 0;
	int		i;
	char	*ptr;
	ptr	= "hellowabcafdfda";
	
	i = 0;

	while (ptr[i] != '\0')
	{
		ft_putchar(c, ptr_len);
		i++;
	}
	return (0);
}*/
