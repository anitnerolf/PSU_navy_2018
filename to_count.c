/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** to_count
*/

#include "my.h"

void	usage_h(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tfirst_player_pid:  only for the 2nd player.  ");
    my_putstr("pid of the first player.\n");
    my_putstr("\tnavy_positions:  file representing the ");
    my_putstr("positions of the ships.\n");
}

void	check(int i, int j, char **t)
{
    if (j == 0 || j == 1) {
        if (j == 0)
            t[i][j] = i - 1 + 48;
        else
            t[i][j] = '|';
    } else if (j % 2 == 0)
        t[i][j] = '.';
    else
        t[i][j] = ' ';
}

int	count_line(char *s)
{
    int a = 0;
    int i = 0;

    while (s[i] != '\0' && s[i] != '\n') {
        a++;
        i++;
    }
    return (a);
}
