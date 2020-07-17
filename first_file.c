/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** first_file
*/

#include "my.h"

char	*read_file(char *filepath)
{
    int fd = 0;
    char	*buffer = malloc(sizeof(char) * 33);

    if (buffer == NULL)
        return (NULL);
    fd = open(filepath, O_RDONLY);
    if (fd < 0)
        return (NULL);
    else {
        read(fd, buffer, 32);
        close(fd);
        buffer[32] = '\0';
        return (buffer);
    }
}
