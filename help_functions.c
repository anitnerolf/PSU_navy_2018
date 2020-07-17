/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** help_functions
*/

#include "my.h"

int	my_strlen(char *str)
{
    int	i = 0;

    if (str != NULL) {
        while (str[i] != '\0') {
            i++;
        }
        return (i);
    }
    return (84);
}

void	my_show_word_array(char **str)
{
    int	i = 0;

    while (str[i]) {
        my_putstr(str[i]);
        my_putchar('\n');
        i++;
    }
}
