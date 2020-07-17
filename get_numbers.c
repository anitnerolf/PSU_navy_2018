/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** get_numbers
*/

#include "my.h"

int	to_check(char c)
{
    int	i = 0;

    if (c == 'A')
        i = 2;
    if (c == 'B')
        i = 4;
    if (c == 'C')
        i = 6;
    return (i);
}

int	to_check_second(char c)
{
    int	i = 0;

    if (c == 'D')
        i = 8;
    if (c == 'E')
        i = 10;
    if (c == 'F')
        i = 12;
    return (i);
}

int	to_check_three(char c)
{
    int	i = 0;

    if (c == 'G')
        i = 14;
    if (c == 'H')
        i = 16;
    return (i);
}

int	check_character(char c)
{
    int	i = 0;

    if ('A' || 'B' || 'C')
        i = to_check(c);
    if (c == 'D' || c == 'E' || c == 'F')
        i = to_check_second(c);
    if (c == 'G' || c == 'H')
        i = to_check_three(c);
    return (i);
}

char	**put_second_numbers(get_numbers_t *g, char **map, char *s)
{
    if (check_map(s) != 1) {
        while (g->e <= 24) {
            g->b = check_character(s[g->e + 2]);
            g->a = s[g->e + 3] - 49;
            map[g->a + 2][g->b] = s[g->e];
            g->d = check_character(s[g->e + 5]);
            g->c = s[g->e + 6] - 49;
            while (g->b <= g->d && g->a <= g->c) {
                map[g->a + 2][g->b] = s[g->e];
                if (s[g->e + 2] >= s[g->e + 5])
                    g->a = g->a + 1;
                else
                    g->b = g->b + 2;
            }
            g->e = g->e + 8;
        }
        return (map);
    } else
        return (NULL);
}
