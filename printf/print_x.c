/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** print_x
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void	print_x(const char *str, va_list ap)
{
    int	n;

    if (*str == 'x') {
        n = va_arg(ap, int);
        my_hexadecimal_base(n);
    }
}
