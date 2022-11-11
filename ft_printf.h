/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:46:01 by polpi             #+#    #+#             */
/*   Updated: 2022/11/11 13:22:47 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int	    ft_printf(const char *, ...);
void    ft_flag_c(char c);
int     ft_flag_d(int   c);
void    ft_flag_i(int, int);
void    ft_flag_p(int, int);
void    ft_flag_s(int, int);
void    ft_flag_u(int, int);
void    ft_flag_x(int, int);
void    ft_flag_X(int, int);
void    ft_flag_percent(int, int);
int		ft_reverse(int	c);
int		ft_strlen_int(int	len);
char	*ft_itoa(int n);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);


#endif