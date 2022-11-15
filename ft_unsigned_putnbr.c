/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:18:47 by polpi             #+#    #+#             */
/*   Updated: 2022/11/15 16:54:59 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen_unsigned_int(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

int ft_unsigned_putnbr(unsigned int nbr)
{
    int    i;

	i = 0;
    if (nbr > 9)
        ft_unsigned_putnbr(nbr / 10);
    ft_putchar((nbr % 10 + '0'));
	i += ft_strlen_unsigned_int(nbr);
	return (i);
}
