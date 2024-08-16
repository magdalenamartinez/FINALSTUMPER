/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** smallest prime >= parameter
*/
#include <stdio.h>
int is_prime(int nb);
int my_find_prime_sup(int nb)
{
    int primesup = nb + 1;
    int prime = 0;
    if (is_prime(nb) == 1) {
        return nb;
    } else {
        while (prime == 0) {
            prime = is_prime(primesup);
            primesup++;
        }
        return primesup - 1;
    }
}

int is_prime(int nb)
{
    int prime = 0; int resto = 0; int i = nb - 1;
    if (nb == 1 || nb == 0) {
        return 0;
    }
    if (nb == 2) {
        return 1;
    }
    while (prime == 0 && i != 1) {
        resto = nb % i;
        if (resto == 0) {
            prime = 1;
        } else {
            i--;
        }
    }
    if (prime == 1) {
        return 0;
    } else {
        return 1;
    }
}


/*
int main(void)
{
    int c = my_find_prime_sup(4);
    printf("%i",c);
    return 0;
}
*/
