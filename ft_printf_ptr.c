/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:27:55 by danalmei          #+#    #+#             */
/*   Updated: 2023/05/01 19:41:32 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_ptr(unsigned long long ptr)
{
	int	index;
	int	c;

	c = 0;
	index = 0;
	if (ptr >= 16)
	{
		c += ft_write_ptr(ptr / 16);
		c += ft_write_ptr(ptr % 16);
	}
	else
	{
		index = ptr % 16;
		ft_putchar_fdp(HEX_L[index], 1);
		c++;
	}
	return (c);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 0;
	print_len += ft_putstr_fdp("0x", 1);
	if (ptr == 0)
		print_len += ft_putchar_fdp('0', 1);
	else
	{
		print_len += ft_write_ptr(ptr);
		
	}
	return (print_len);
}
