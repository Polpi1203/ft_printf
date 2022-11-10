/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:45:58 by polpi             #+#    #+#             */
/*   Updated: 2022/11/10 15:01:50 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

// https://openclassrooms.com/forum/sujet/codage-de-printf-40932

/* Initialiser une variable va_list ap */

#include "ft_printf.h"

t_func  g_tab[] = 
{
    {&ft_flag_d, 'd'},
    {NULL, -1}
};

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	ap;

	i = 0;
	va_start(ap, s);
	
	while (s[i] != '\0')
	{
		if (s[i] == '%')
			exec_falg(s[i++]);
		i++;
	}
	
	//printf("%d", i); 
	va_end(ap);
	return (1);
}

void	exec_falg(char	polpi)
{
	int	i;

	i = 0;
	while (g_tab[i].key != -1)
	{
		if (g_tab[i].key == polpi)
			g_tab[i].ptrfunc(polpi);
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	ft_printf("%c", argv[1]);

	printf("\n");

	printf("%c\n", argv[1]);
}
/*
while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'd')
				ft_flag_d(va_arg(ap, int));
			else if (s[i] == 'c')
				ft_flag_c(va_arg(ap, char));
		}
	i++;
	}
*/