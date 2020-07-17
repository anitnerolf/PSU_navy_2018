/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** print_c
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void	print_c(const char *str, va_list ap)
{
    char	c;

    if (*str == 'c') {
        c = (char) va_arg(ap, int);
        my_putchar(c);
    }
}
