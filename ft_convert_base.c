/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:17:14 by polpi             #+#    #+#             */
/*   Updated: 2022/11/17 10:35:45 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_unsigned_int(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 16;
	}
	return (i);
}

void	ft_putchar_hexa(unsigned int c, char *str)
{
	write (1, &str[c], 1);
}

int   ft_convert_base(unsigned int nbr, char *str)
{
	int				len;
	unsigned int	nb_copy;

	len = 0;
	nb_copy = nbr;
	
	if (nbr > 15)
		ft_convert_base((nbr / 16), str);
	ft_putchar_hexa((nbr % 16), str);
	if (nb_copy == 0)
		len = 1;
	len += ft_strlen_unsigned_int(nb_copy);
	return (len);
}
				