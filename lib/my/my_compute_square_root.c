/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** function that returns sq root
*/
#include <stdio.h>
int my_compute_square_root(int nb)
{
    int resto = 0;
    int mul = 0;
    int cociente = 0;
    int encontrado = 0;
    while (encontrado == 0 && mul <= nb) {
        if (nb == mul * mul) {
            encontrado = 1;
        } else {
            mul++;
        }
    }
    if (encontrado == 1) {
        return mul;
    } else {
        return 0;
    }
}

/*
int main(void)
{
    int c=my_compute_square_root(36);
    printf("%i",c);
    return 0;
}
*/
