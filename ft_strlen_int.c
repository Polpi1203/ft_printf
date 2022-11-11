/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:41:13 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/11 11:02:24 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen_int(int	len)
{
	int		i;
	int		size_len;
	char	*str;

	i = 0;
	size_len = 0;
	str = ft_itoa(len);
	while (str[i++] != '\0')
		size_len++;
	return (size_len);
}