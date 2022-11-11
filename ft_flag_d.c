/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:56:43 by polpi             #+#    #+#             */
/*   Updated: 2022/11/11 10:59:22 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag_d(int   c)
{
    char    *s;
	int		d;
	int		len;

	len = 0;
	s = "0123456789";
	d = c;
	if (c < 0)
		d = ft_reverse(c);
    if (d > 9)
	{
		ft_flag_d(d / 10);
		ft_flag_d(d % 10);
	}
	else 
		write (1, &s[d], 1);
	len = ft_strlen_int(d);
	return (len);
}