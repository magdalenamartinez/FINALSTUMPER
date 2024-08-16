/*
** EPITECH PROJECT, 2022
** rush3
** File description:
** rush3
*/

#include "rush3.h"

void rush3(char *buff)
{
    int h = recorrer(0,buff); int v = ver(buff);
    char *str1 = "[rush1-1]"; char *str2 = "[rush1-2]"; int si = 0;
    if (buff[0] == 'o') {
        my_putstr(str1); my_putchar(' '); my_put_nbr(h);
        my_putchar(' '); my_put_nbr(v); si = 1;
    }
    if (buff[0] == '/') {
        my_putstr(str2); my_putchar(' '); my_put_nbr(h);
        my_putchar(' ') ;my_put_nbr(v); si = 1;
    }
    if (buff[0] == '*') {
        star(v, h); si = 1;
    }
    if (buff[0] == 'A') {
        letters(buff); si = 1;
    }
    if (buff[0] == 'B') {
        my_b(buff,h,v); si = 1;
    }
    functionsi(si);
}

void my_b(char *buff, int h, int v)
{
    char *str3 = "[rush1-3]"; char *str4 = "[rush1-4]";
    char *str5 = "[rush1-5]";
    my_putstr(str3); my_putchar(' '); my_put_nbr(h); my_putchar(' ');
    my_put_nbr(v);
    my_putstr(" || "); my_putstr(str4); my_putchar(' ');
    my_put_nbr(h); my_putchar(' ');my_put_nbr(v); my_putstr(" || ");
    my_putstr(str5); my_putchar(' '); my_put_nbr(h);
    my_putchar(' ');my_put_nbr(v);
}

void letters(char *buff)
{
    int j = 0; int v = ver(buff);
    int h = recorrer(0,buff);
    char *str3 = "[rush1-3]"; char *str4 = "[rush1-4]";
    char *str5 = "[rush1-5]"; int i = recorrer(1,buff);
    if (buff [i - 1] == 'A') {
        my_putstr(str3); my_putchar(' ');
        my_put_nbr(h); my_putchar(' '); my_put_nbr(v);
    }
    if (buff [i - 1] == 'C') {
        j = whilefunction(buff);
        if (buff[j - 2] == 'C') {
            my_putstr(str4); my_putchar(' ');
            my_put_nbr(h); my_putchar(' '); my_put_nbr(v);
        }
        if (buff[j - 2] == 'A') {
            my_putstr(str5); my_putchar(' ');
            my_put_nbr(h); my_putchar(' '); my_put_nbr(v);
        }
    }
}

int recorrer(int i, char *buff)
{
    int stop = 0;
    while (buff[i] != '\0' && stop == 0) {
        if (buff[i] == '\n') {
            stop = 1;
        }
        i++;
    }
    i--;
    return i;

}

int ver(char *buff)
{
    int j = 0;
    int i = 0;
    while (buff[i] != '\0') {
        i = recorrer(i, buff);
        i++;
        j++;
    }
    return j;
}
