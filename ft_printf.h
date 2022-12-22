/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 10:40:42 by digil-pa          #+#    #+#             */
/*   Updated: 2022/12/22 11:41:38 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*--------------------------------------------------------*/
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
/*--------------------------------------------------------*/
typedef struct s_data
{
	int	count;
}		t_data;

//Prototypes

void	ft_hexa(unsigned long int k, const char *c);
void	ft_pointer(size_t k, int *len);
void	ft_putchar_len(char c, int *len);
void	ft_putnbr_len(unsigned int k, int *len);
void	ft_unsignednbr(unsigned int k, int *len);
void	ft_putstr(char *s);
int		ft_printf(const char *format, ...);

#endif