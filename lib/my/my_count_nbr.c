/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** my_put_nbr
*/
#include <unistd.h>
#include <stdio.h>
int my_count_nbr(int nb)
{
    int   d = 1; int r = 0;
    if (nb == -2147483648) {
        r = 11;
    } else {
        if (nb < 0) {
            nb *= -1; r = 1;
        }
        while ((nb / d) >= 10) {
            d *= 10;
        }
        while (d > 0) {
            d /= 10;
            r++;
        }
    }
    return r;
}
