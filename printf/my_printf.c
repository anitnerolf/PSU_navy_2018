/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

void	print_something(const char *str, va_list ap)
{
    if (str[-1] == '%') {
        print_c(str, ap);
        print_s(str, ap);
        print_d(str, ap);
        print_u(str, ap);
        print_b(str, ap);
        print_hexadecimal(str, ap);
        print_x(str, ap);
        print_o(str, ap);
    } else if (*str == '%')
        return;
    else
        my_putchar(*str);
}

int	my_printf(const char *str, ...)
{
    va_list	ap;

    va_start(ap, str);
    if (str != NULL) {
        while (*str) {
            print_something(str, ap);
            str++;
        }
        va_end(ap);
        return (0);
    }
    return (84);
}
