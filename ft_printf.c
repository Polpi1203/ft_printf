/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:45:58 by polpi             #+#    #+#             */
/*   Updated: 2022/11/15 20:18:18 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list ap, char check)
{
	int	len;

	len = 0;
	if (check == 'd' || check == 'i')
		len = ft_flag_d(va_arg(ap, int));
	else if (check == 'c')
		len = ft_flag_c(va_arg(ap, int));
	else if (check == 's')
		len = ft_flag_s(va_arg(ap, char *));
	else if (check == 'u')
		len = ft_flag_u(va_arg(ap, unsigned int));
	else if (check == '%')
		len = ft_flag_prc('%');
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	ap;
	int		len;

	i = -1;
	va_start(ap, s);
	len = 0;
	while (s[++i])
	{
		if (s[i] == '%')
			len += ft_check(ap, s[++i]);
		else
			len += write(1, &s[i], 1);
	}
	va_end(ap);
	return (len);
}
/*

-------------TEST %c----------------

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", "------FT_PRINTF------");
	printf("\n%d", ft_printf(" %c %c %c ", 'w', 'a', 'b'));
	printf("\n%s\n", "------PRINTF------");
	printf("\n%d", printf(" %c %c %c ", 'w', 'a', 'b'));
}
*/
/*
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", "------FT_PRINTF------");
	printf("\n%d", ft_printf(" %s %s %s %s", " - ", "", "4", ""));
	printf("\n%s\n", "------PRINTF------");
	printf("\n%d", printf(" %s %s %s %s", " - ", "", "4", ""));
}
*/
/*
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", "------FT_PRINTF------");
	printf("\n%d", ft_printf("%u", -1));
	printf("\n%s\n", "------PRINTF------");
	printf("\n%d", printf("%u", -1));
}
*/
/*
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", "------FT_PRINTF------");
	printf("\n%d", ft_printf(" %% "));
	printf("\n%s\n", "------PRINTF------");
	printf("\n%d", printf(" %% "));
}
*/
/*
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", "------FT_PRINTF------");
	printf("\n%d", ft_printf(" %d ", 0));
	printf("\n%s\n", "------PRINTF------");
	printf("\n%d", printf(" %d ", 0));
}
*/