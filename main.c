/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** main
*/

#include "my.h"

void	my_game(void)
{
    struct sigaction sa;
    int z = 0;

    my_printf("my_pid: %d\nwaiting for enemy connection...\n", getpid());
    sig_act(sa);
    if (saving->p == 1) {
        my_printf("\nEnemy connected\n\nmy_positions:\n");
        my_show_word_array(saving->x);
        my_printf("\nenemy's positions:\n");
        my_show_word_array(print_lines());
        my_next_line(saving->d);
    }
}

void	player_game(struct sigaction sa, char **av)
{
    int y = 0;

    y = kill(my_getnbr(av[1]), SIGUSR1);
    if (y == 0) {
        my_printf("my_pid: %d\nsuccessfully connected\n\nmy_positions:\n", \
    saving->enemy_pid);
        my_show_word_array(saving->y);
        my_printf("\nenemy's positions:\n");
        my_show_word_array(print_lines());
        my_printf("waiting for enemy's attack...\n");
        usleep(1000000000);
        saving->f = get_next_line(0);
    }
}

int	do_first(int ac, char **av, get_numbers_t *g)
{
    if (av[1][0] == '-' && av[1][1] == 'h' && !av[2])
        usage_h();
    else {
        if (read_file(av[1]) == NULL)
            return (84);
        saving->x = put_second_numbers(g, print_lines(), \
    read_file(av[1]));
        if (saving->x == NULL)
            return (84);
        my_game();
    }
}

int	do_third(char **av, get_numbers_t *g)
{
    struct	sigaction	sa;

    if (read_file(av[2]) == NULL)
        return (84);
    saving->y = put_second_numbers(g, print_lines(), read_file(av[2]));
    if (saving->y == NULL)
        return (84);
    player_game(sa, av);
}

int	main(int ac, char **av)
{
    get_numbers_t	*g = get_numbers(av);

    if (ac < 2 || ac > 3)
        return (84);
    else {
        begin_structure();
        if (ac == 2) {
            return (do_first(ac, av, g));
        }
        if (ac == 3) {
            return (do_third(av, g));
        }
    }
}
