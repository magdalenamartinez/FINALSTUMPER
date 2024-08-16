/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** returns first arg raised to p
*/
#include <stdio.h>
int my_compute_power_rec(int nb, int p)
{
    if (p > 0) {
        return (nb * my_compute_power_rec(nb, p - 1));
    }
    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
}

/*
int main(void)
{
    int n=0;
    n=my_compute_power_rec(2,3);
    printf("%i",n);
    return 0;
}
*/
