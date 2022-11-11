/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:46:01 by polpi             #+#    #+#             */
/*   Updated: 2022/11/11 15:49:40 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_flag_d(int c);
int		ft_reverse(int c);
int		ft_strlen_int(int len);
char	*ft_itoa(int n);
void	ft_putchar(char c);
int		ft_putnbr(int n);
void	ft_putstr(char *s);
int		ft_check(va_list ap, char check);
int		ft_strlen_int(int nbr);

#endif