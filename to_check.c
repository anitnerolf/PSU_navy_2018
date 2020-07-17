/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** to_check
*/

#include "my.h"

void	sig_act(struct sigaction sa)
{
    sa.sa_sigaction = handler;
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1, &sa, NULL);
    usleep(1000000000);
}

void	handler(int signum, siginfo_t *inf, void *c)
{
    saving->enemy_pid = inf->si_pid;
    if (signum == SIGUSR1)
        saving->p++;
    if (signum == SIGUSR2)
        saving->nb++;
}

int	my_next_line(char *s)
{
    my_printf("attack: ");
    s = get_next_line(0);
    if (check_stdin(s) == 84) {
        my_printf("wrong position\n");
        my_next_line(s);
    }
}
