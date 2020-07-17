/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_putnbr_base
*/

void	my_putchar(char c);

int	my_putnbr_base(int nbr, int b)
{
    int	i;
    char	*str = "0123456789ABCDEF";

    if (nbr < 0) {
        my_putchar('-');
        my_putnbr_base(nbr / -b, b);
        i = nbr % b * -1;
        my_putchar(str[i]);
    }
    if (nbr > 0) {
        my_putnbr_base(nbr / b, b);
        i = nbr % b;
        my_putchar(str[i]);
    }
    if (nbr == '0')
        my_putchar('0');
    return (0);
}
