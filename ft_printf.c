/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:45:58 by polpi             #+#    #+#             */
/*   Updated: 2022/11/08 17:11:33 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "ft_printf.h"

// https://openclassrooms.com/forum/sujet/codage-de-printf-40932 intersting


/* Initialiser une variable va_list ap */

int	ft_printf(const char *s, ...)
{
	int		size_len;
	va_list	ap;
	int		d;

	i = 0;
	va_start(ap, s);
	while (s[i] != '%')
		





	printf("%d", i); // test
	va_end(ap);
	return (1);
}

int main(void)
{
	ft_printf("%d", 43, 56, 54, 54, 54, 54);
}