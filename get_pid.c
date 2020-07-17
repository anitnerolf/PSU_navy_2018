/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** get_pid
*/

#include "my.h"

int	get_pid(void)
{
    int	t = 0;

    t = getpid();
    return (t);
}

sign_t	*sign_it(void)
{
    sign_t	*t = malloc(sizeof(sign_t));

    t->g = 0;
    t->my_pid = getpid();
    t->enemy_pid = 0;
    return (t);
}
