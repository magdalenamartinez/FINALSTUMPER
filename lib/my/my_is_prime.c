/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** 1 prime 0 not prime
*/
#include <stdio.h>

int my_is_prime(int nb)
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
    int c=my_is_prime(100);
    printf("%i",c);
    return 0;
}
*/
