/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:51:09 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/20 15:37:55 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *s, ...);

void	ft_char(char c, va_list list, int *counter);

void	ft_number(char c, va_list list, int *counter);

void	ft_number_hexa(char s, va_list list, int *counter);

void	ft_pointer(va_list list, int *counter);

void	ft_place(char c, va_list list, int *counter);

void	ft_putnbr_hexa(unsigned long n, char *base, int *counter);

int		ft_signed_len(int nbr);

int		ft_unsigned_len(unsigned int nbr);

void	ft_unsigned_number(unsigned int nbr);

#endif