/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:17:14 by polpi             #+#    #+#             */
/*   Updated: 2022/11/16 17:19:18 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_hexa(int c)
{
	char	*str;

	str = "0123456789abcdef";
	write (1, &str[c], 1);
}

int   ft_convert_base(int nbr)
{
	int	len;
	int	nb_copy;

	len = -1;
	nb_copy = nbr;
	if (nb_copy == 0)
		len = 1;
	if (nb_copy > 0 && nb_copy < 10)
		len = 0;
	while (nb_copy != 0)
	{
		nb_copy = nb_copy / 10;
		len++;
	}
	if (nbr > 15)
	{
		ft_convert_base(nbr / 16);
	}
	ft_putchar_hexa(nbr % 16);
	return (len);
}
