/*
** EPITECH PROJECT, 2022
** whilef
** File description:
** whilef
*/

#include "rush3.h"

int whilefunction(char *buff)
{
    int j = 0;
    while (buff[j] != '\0') {
        j++;
    }
    return j;
}

void star(int v, int h)
{
    char *str2 = "[rush1-2]";
    my_putstr(str2); my_putchar(' '); my_put_nbr(h);
    my_putchar(' '); my_put_nbr(v);
}

void functionsi(int si)
{
    if (si == 0) {
        my_putstr("none");
    }
    my_putchar('\n');
}
