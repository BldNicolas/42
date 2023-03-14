/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberlaud <nberlaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:44:27 by nberlaud          #+#    #+#             */
/*   Updated: 2022/06/09 19:05:54 by nberlaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

char	*ft_uitoa(unsigned int n);

int		ft_formats(va_list args, const char format);
int		ft_hex_len(unsigned int num);
int		ft_num_len(unsigned int num);
int		ft_printf(const char	*str, ...);
int		ft_print_char(int c);
int		ft_print_hex(unsigned int num, const char format);
int		ft_print_nbr(int n);
int		ft_print_percent(void);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_str(char	*str);
int		ft_print_unsigned(unsigned int n);
int		ft_ptr_len(unsigned long long num);

void	ft_put_hex(unsigned int num, const char format);
void	ft_put_ptr(unsigned long long num);
void	ft_put_str(char *str);

#endif
