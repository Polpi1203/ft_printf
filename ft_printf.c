/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:45:58 by polpi             #+#    #+#             */
/*   Updated: 2022/11/06 13:50:22 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "ft_printf.h"


/* Initialiser une variable va_list ap */

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	ap;
	int		d;

	i = 0;
	va_start(ap, s);
	while (*s) // fonctionne pas comme ca,, obliger de call plusieur fois avec va_arg ?? 
	{
		if (s[1] == 'd')
		{
			d = va_arg(ap, int);
			printf("%d\n", d);
			//write (1, &c, 1);
		}
		else if (s[1] == 'c')
		{
			printf("%c\n", ap[i]);
		}
		i++;
	}
	printf("%d", i); // test
	va_end(ap);
	return (1);
}

int main(void)
{
	ft_printf("%d", 43, 56, 54, 54, 54, 54);
}