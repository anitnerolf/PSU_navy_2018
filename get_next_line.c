/*
** EPITECH PROJECT, 2018
** CPE_getnextline_2018
** File description:
** get_next_line
*/

#include "my.h"

get_line_t	*get_line(get_line_t *g)
{
    g = malloc(sizeof(get_line_t));
    g->str = malloc(sizeof(char) * READ_SIZE + 2);
    g->r = 0;
    g->i = 0;
    return (g);
}

char	*my_strcpy(char *src, char *dest)
{
    int	i = 0;

    dest = malloc(sizeof(char) * my_strlen(src) + 2);
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i + 1] = '\0';
    return (dest);
}

int	read_the_file(int fd, char *buffer, int size)
{
    int	k = 0;

    k = read(fd, buffer, size);
    if (k == -1)
        return (84);
    return (k);
}

char	*get_next_line(int fd)
{
    get_line_t	*g = malloc(sizeof(get_line_t));
    static	int	k;
    static	char	buffer[READ_SIZE];

    g = get_line(g);
    if (g->str == NULL || fd == -1)
        return (NULL);
    while (k <= g->r) {
        for (g->i = 0; (g->r = read_the_file(fd, buffer, READ_SIZE)) > 0 && \
    buffer[k] != '\n'; g->i++) {
            if (g->r == READ_SIZE)
                g->r = 0;
            g->str = my_strcpy(g->str, g->str);
            g->str[g->i] = buffer[k];
        }
        g->str = ((g->r == 0 || fd == -1) ? NULL : g->str);
        return (g->str);
        k++;
    }
}
