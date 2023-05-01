/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:05:03 by danalmei          #+#    #+#             */
/*   Updated: 2023/05/01 20:32:43 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
    char    *str;
    char    ch;
    int		num[3];
    long int     hex[8];
	unsigned int	u_num[3];

    ch = 'a';
    str = "Hello world!";
	num[0] = 0;
    num[1] = 2147483647;
    num[2] = -2147483648;
	u_num[0] = 23456;
    u_num[1] = 0;
    u_num[2] = 4294967295; // Output is wrong
    hex[0] = 34654;
    hex[1] = 0;
    hex[2] = -2147483648;
    hex[3] = 2147483647;    //long max
    hex[4] = 4294967295;    //Ulong max
    hex[5] = -42;
    hex[5] = -42;
    hex[5] = -42;
    printf("  Lenght -> %d\n", ft_printf("This is a str -> %s", str));
    printf("  Lenght -> %d\n", ft_printf("This is a char -> %c", ch));
    printf("  Lenght -> %d\n", ft_printf("This is a num -> %i", num[0]));
    printf("  Lenght -> %d\n", ft_printf("This is a num -> %i", num[1]));
    printf("  Lenght -> %d\n", ft_printf("This is a num -> %i", num[2]));
    printf("  Lenght -> %d\n", ft_printf("This is a unsigned num -> %u", u_num[0]));
    printf("  Lenght -> %d\n", ft_printf("This is a unsigned num -> %u", u_num[1]));
    printf("  Lenght -> %d\n", ft_printf("This is a unsigned num -> %u", u_num[2]));
    printf("  Lenght -> %d\n", ft_printf("This is a ptr -> %p", &num));
    printf("  Lenght -> %d\n", ft_printf("This is a ptr -> %p %p", 0, 0));
    //printf("Test test -> %p %p", 0, 0);
    printf("  Lenght -> %d\n", ft_printf("This is a hex -> %x", hex[0]));
    printf("  Lenght -> %d\n", ft_printf("This is a heX -> %X", hex[1]));
    printf("  Lenght -> %d\n", ft_printf("This is a hex -> %x", hex[2]));
    printf("  Lenght -> %d\n", ft_printf("This is a heX 3 -> %x", hex[3]));
    printf("  Lenght -> %d\n", ft_printf("This is a hex 4 -> %x", hex[4]));
    printf("  Lenght -> %d\n", ft_printf("This is a heX -> %x", hex[5]));

    printf(" This is a hex -> %lx\n", hex[0]);
    printf(" This is a hex -> %lx\n", hex[1]);
    printf(" This is a hex -> %lx\n", hex[2]);
    printf(" This is a hex 3 -> %lx\n", hex[3]);
    printf(" This is a hex 4 -> %lx\n", hex[4]);
    printf(" This is a hex -> %lx\n", hex[5]);


    printf("  Lenght -> %d\n", ft_printf("This is a format -> %%"));
    //printf("This is a hex -> %%\n");
}