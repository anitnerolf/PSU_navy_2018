/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** to_count
*/

#include "my.h"

get_numbers_t	*get_numbers(char **av)
{
    get_numbers_t *g = malloc(sizeof(get_numbers_t));

    g->a = 0;
    g->b = 0;
    g->c = 0;
    g->d = 0;
    g->e = 0;
    return (g);
}

char	**print_lines(void)
{
    char **t = malloc(sizeof(char*) * 11);
    int i = 2;
    int j = 0;

    t[0] = my_strdup(" |A B C D E F G H");
    t[1] = my_strdup("-+---------------");
    while (i < 10) {
        j = 0;
        t[i] = malloc(sizeof(char) * 19);
        while (j < 18) {
            check(i, j, t);
            j++;
        }
        t[i][j] = '\0';
        i++;
    }
    t[10] = NULL;
    return (t);
}
