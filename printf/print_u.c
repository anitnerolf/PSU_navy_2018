/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** print_u
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void	print_u(const char *str, va_list ap)
{
    int	n;

    if (*str == 'u') {
        n = va_arg(ap, int);
        my_unsigned_number(n);
    }
}
