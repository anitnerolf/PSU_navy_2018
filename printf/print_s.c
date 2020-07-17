/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** print_s
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void	print_s(const char *str, va_list ap)
{
    char	*x;

    if (*str == 's') {
        x = va_arg(ap, char*);
        my_putstr(x);
    }
}
