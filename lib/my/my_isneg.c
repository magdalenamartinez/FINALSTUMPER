/*
** EPITECH PROJECT, 2022
** my_isneg.c
** File description:
** display N or P
*/

void my_putchar(char n);

int my_isneg(int n)
{
    char letter = 0;

    if (n < 0) {
        letter = 78;
    } else {
        letter = 80;
    }
    my_putchar(letter);
}


/*int	main(void)
{
	int	n;

	n = 0;
	my_isneg(n);
}
*/
