/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:08:49 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/29 21:50:48 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX_L "0123456789abcdef"
# define HEX_U "0123456789ABCDEF"
#include <stdio.h> //#Remove
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_print_ptr(unsigned long long ptr);

#endif
