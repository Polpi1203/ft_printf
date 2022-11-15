/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:45:58 by polpi             #+#    #+#             */
/*   Updated: 2022/11/15 16:04:04 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://github.com/xicodomingues/francinette/blob/master/tests/printf/fsoares/mandatory.c

#include "ft_printf.h"

int	ft_check(va_list ap, char check)
{
	int	len;

	len = 0;
	if (check == 'd')
		len = ft_flag_d(va_arg(ap, int));
	else if (check == 'c')
		len = ft_flag_c(va_arg(ap, int));
	else if (check == 's')
		len = ft_flag_s(va_arg(ap, char *));
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

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", "------FT_PRINTF------");
	printf("\n%d", ft_printf(" %s %s %s %s", " - ", "", "4", ""));
	printf("\n%s\n", "------PRINTF------");
	printf("\n%d", printf(" %s %s %s %s", " - ", "", "4", ""));
}
