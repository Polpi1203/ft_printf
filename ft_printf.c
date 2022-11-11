/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:45:58 by polpi             #+#    #+#             */
/*   Updated: 2022/11/11 16:29:48 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://github.com/xicodomingues/francinette/blob/master/tests/printf/fsoares/mandatory.c

#include "ft_printf.h"

int	ft_check(va_list ap, char check)
{
	int	len;

	len = 0;
	{
		if (check == 'd')
			len = ft_flag_d(va_arg(ap, int));
	}
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	ap;
	int		len;

	i = 0;
	va_start(ap, s);
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			len += ft_check(ap, s[i + 1]);
			i++;
		}
		else
		{
			len = i;
		}
	i++;
	}
	va_end(ap);
	return (len);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", "------FT_PRINTF------");
	printf("\n%d", ft_printf("%d", atoi(argv[1])));
	printf("\n%s\n", "------PRINTF------");
	printf("%d\n", printf("%d\n", atoi(argv[1])));
}
