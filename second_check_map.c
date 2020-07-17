/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** second_check_map
*/

#include "my.h"

save_map_t	*saving;

int	first_check_map(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] != 'A' && str[i] != 'B' && \
    str[i] != 'C' && str[i] != 'D' && \
    str[i] != 'E' && str[i] != 'F' && \
    str[i] != 'G' && str[i] != 'H' && \
    str[i] != ':' && str[i] != '2' && \
    str[i] != '3' && str[i] != '4' && \
    str[i] != '5' && str[i] != '1' && \
    str[i] != '6' && str[i] != '7' && \
    str[i] != '\n' && str[i] != '8'))
            return (1);
    }
    return (0);
}

int	only_check(char *str)
{
    if ((str[0] != '2' || str[8] != '3' || str[16] != '4' || \
    str[24] != '5') || (str[1] != ':' || str[4] != ':' || \
    str[9] != ':' || str[12] != ':' || str[17] != ':' || \
    str[20] != ':' || str[25] != ':' || str[28] != ':') || \
    (check_character(str[2]) < 2 || check_character(str[2]) > 16 || \
    check_character(str[5]) < 2 || check_character(str[5]) > 16 || \
    check_character(str[10]) < 2 || check_character(str[10]) > 16 || \
    check_character(str[13]) < 2 || check_character(str[13]) > 16 || \
    check_character(str[18]) < 2 || check_character(str[18]) > 16 || \
    check_character(str[21]) < 2 || check_character(str[21]) > 16 || \
    check_character(str[26]) < 2 || check_character(str[26]) > 16 || \
    check_character(str[29]) < 2 || check_character(str[29]) > 16) || \
    my_strlen(str) != 32 || minus_check(str) == 1 || \
    (str[3] < 49 || str[3] > 56 || str[6] < 49 || str[6] > 56 || \
    str[11] < 49 || str[11] > 56 || str[14] < 49 || str[14] > 56 || \
    str[19] < 49 || str[19] > 56 || str[22] < 49 || str[22] > 56 || \
    str[27] < 49 || str[27] > 56 || str[30] < 49 || str[30] > 56))
        return (1);
    return (0);
}

int	check_map(char *str)
{
    int	i = 0;

    if (only_check(str) == 1 || minus_check(str) == 1)
        return (1);
    return (0);
}

int	check_dots_0(char **av)
{
    int i = 2;
    int j = 2;
    int k = 0;

    while (av[i] != NULL) {
        j = 2;
        while (av[i][j]) {
            if (j % 2 == 0 && (av[i][j] == '.' || \
    av[i][j] == 'o' || av[i][j] == 'x'))
                k = 1;
            else
                k = 2;
            j++;
        }
        i++;
    }
    return (k);
}
