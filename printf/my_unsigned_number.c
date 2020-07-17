/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** unsigned_number
*/

void	my_putchar(char c);

int	my_unsigned_number(int nbr)
{
    if (nbr > 0) {
        my_unsigned_number(nbr / 10);
        my_putchar(nbr % 10 + '0');
    }
    if (nbr == '0')
        my_putchar('0');
    if (nbr < 0)
        return (84);
    return (0);
}
