/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** print_X
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void	print_hexadecimal(const char *str, va_list ap)
{
    int	n;

    if (*str == 'X') {
        n = va_arg(ap, int);
        my_putnbr_base(n, 16);
    }
}
