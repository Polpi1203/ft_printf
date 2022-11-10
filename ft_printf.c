/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:45:58 by polpi             #+#    #+#             */
/*   Updated: 2022/11/10 10:33:13 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

// https://openclassrooms.com/forum/sujet/codage-de-printf-40932

/* Initialiser une variable va_list ap */

#include "ft_printf.h"
//#include "ft_flag_d.c"

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	ap;
	int		d;

	i = 0;
	va_start(ap, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'd')
			{	
				d = va_arg(ap, int);
				ft_flag_d(d);
			}
		}
	i++;
	}
	//printf("%d", i); 
	va_end(ap);
	return (1);
}

int main(int argc, char **argv)
{
	(void)argc;
	ft_printf("%d", atoi(argv[1]));

	printf("\n");

	printf("%d\n", atoi(argv[1]));
}