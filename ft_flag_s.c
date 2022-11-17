/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:45:52 by polpi             #+#    #+#             */
/*   Updated: 2022/11/17 11:26:09 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag_s(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
		len = ft_putstr("(null)");
	else 
		len = ft_putstr(str);
	return (len);
}
