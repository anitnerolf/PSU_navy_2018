/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** check_map
*/

#include "my.h"

save_map_t	*saving;

void	free_it(get_numbers_t *g, short_it_t *s)
{
    int	i = 0;

    while (g->k[i]) {
        free(g->k[i]);
        i++;
    }
    free(g->buffer);
    free(g->k);
    free(g->s);
    free(g);
}

int	begin_structure(void)
{
    saving = malloc(sizeof(save_map_t));
    saving->p = 0;
    saving->nb = 0;
    saving->enemy_pid = 0;
    saving->f = NULL;
    saving->d = NULL;
    saving->ret = 0;
    return (0);
}

int	check_stdin(char *str)
{
    if (my_strlen(str) > 2 || (str[0] < 65 || str[0] > 72) \
    || (str[1] < 49 || str[1] > 56))
        return (84);
    else
        return (1);
}

int	minus_check(char *str)
{
    if ((str[2] == str[5] && (str[6] - str[3] != str[0] - 49)) || \
    (str[10] == str[13] && (str[14] - str[11] != str[8] - 49)) || \
    (str[18] == str[21] && (str[22] - str[19] != str[16] - 49)) || \
    (str[26] == str[29] && (str[30] - str[27] != str[24] - 49)) || \
    (str[2] != str[5] && \
    (str[5] - str[2] != str[0] - 49 || str[3] != str[6])) || \
    (str[10] != str[13] && \
    (str[13] - str[10] != str[8] - 49 || str[11] != str[14])) || \
    (str[18] != str[21] && \
    (str[21] - str[18] != str[16] - 49 || str[19] != str[22])) || \
    (str[26] != str[29] && \
    (str[29] - str[26] != str[24] - 49 || str[27] != str[30])))
        return (1);
    return (0);
}
