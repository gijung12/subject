/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:06:07 by yourintrana       #+#    #+#             */
/*   Updated: 2024/04/10 17:35:07 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printstr(const char *s);
int		ft_printchar(char c);
int		ft_printnbr(int n);
int		ft_printf(const char *format, ...);
int		ft_printhex(unsigned int n, char a);
int		ft_unsignnbr(unsigned int n);
int		ft_printaddress(void *adres);
int		ft_printint(int j);
void	ft_putnbr_fd(int n, int fd);

#endif
