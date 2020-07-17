/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** print_d
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void	print_d(const char *str, va_list ap)
{
    int	n;

    if (*str == 'd' || *str == 'i') {
        n = va_arg(ap, int);
        my_putnbr_base(n, 10);
    }
}
