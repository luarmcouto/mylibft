/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:58:39 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/10/13 23:01:30 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../ft_lib/libft.h"

int	ft_putchr(char c);
int	ft_putstri(char *str);
int	ft_putnb(long n);
int	ft_putnbrunsig(unsigned int nbr);
int	ft_putptr(void *arg);
int	ft_puthex(unsigned long arg, char flag);
int	ft_printf(const char *content, ...);

#endif