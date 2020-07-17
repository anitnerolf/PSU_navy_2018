/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <signal.h>
#include "get_next_line.h"

typedef	struct	sign
{
    int	g;
    int	my_pid;
    int	enemy_pid;
    int	p;
}	sign_t;

typedef	struct	get_numbers
{
    int	a;
    int	b;
    int	c;
    int	d;
    int	e;
    char	*buffer;
    char	*buffer2;
    char	**k;
    int	f;
    int	h;
    char	**t;
    char	**x;
    char	**y;
    struct short_it *s;
}	get_numbers_t;

typedef	struct	short_it
{
    int	i;
    int	j;
    char *a;
    char *b;
}	short_it_t;

typedef	struct	save_map
{
    char	**x;
    char	**y;
    int row;
    int col;
    int nb;
    int enemy_pid;
    int p;
    int i;
    int j;
    char *d;
    char *f;
    int ret;
}	save_map_t;

save_map_t	*saving;

short_it_t	*short_it(void);
void	my_putchar(char c);
int	my_putstr(char *);
int	my_putnbr_base(int nbr, int b);
int	my_unsigned_number(int nbr);
int	my_hexadecimal_base(int nbr);
void	print_b(const char *str, va_list ap);
void	print_c(const char *str, va_list ap);
void	print_s(const char *str, va_list ap);
void	print_d(const char *str, va_list ap);
void	print_u(const char *str, va_list ap);
void	print_hexadecimal(const char *str, va_list ap);
void	print_x(const char *str, va_list ap);
void	print_o(const char *str, va_list ap);
int	my_printf(const char *str, ...);
int	my_strlen(char *str);
char	*read_file(char *filepath);
void	my_show_word_array(char **str);
char	**double_array(char *str, char c, int a, int b);
int	count_words(char *str, char c);
char	**print_lines(void);
char	**put_numbers(get_numbers_t *g, char **k);
char	**put_second_numbers(get_numbers_t *g, char **k, char *s);
void	usage_h(void);
get_numbers_t	*get_numbers(char **av);
int	get_pid(void);
void	check(int i, int j, char **t);
char	*my_strdup(char *src);
int	check_map(char *str);
sign_t	*sign_it(void);
static	void	handler(int signum, siginfo_t *inf, void *c);
char	*get_next_line(int fd);
int	begin_structure(void);
int	check_stdin(char *av);
void	sig_act(struct sigaction sa);
void	handler(int signum, siginfo_t *inf, void *c);
int	my_next_line(char *s);
int	check_character(char c);
int	my_getnbr(char const *str);
int	minus_check(char *str);

#endif /* MY_H_ */
