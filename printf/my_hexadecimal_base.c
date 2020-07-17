/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** hexadecimal_base
*/

void	my_putchar(char c);

int	my_hexadecimal_base(int nbr)
{
    int	i;
    char	*str = "0123456789abcdef";

    if (nbr < 0) {
        my_putchar('-');
        my_hexadecimal_base(nbr / -16);
        i = nbr % 16 * -1;
        my_putchar(str[i]);
    }
    if (nbr > 0) {
        my_hexadecimal_base(nbr / 16);
        i = nbr % 16;
        my_putchar(str[i]);
    }
    if (nbr == '0')
        my_putchar('0');
    return (0);
}
