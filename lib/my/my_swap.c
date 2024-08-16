/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** swaps the content of two int
*/
#include <stdio.h>

void my_swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}
/*
int main(void)
{
    int a = 49;
    int b = 50;

    putchar(a);
    putchar(b);
    my_swap(&a,&b);
    putchar(a);
    putchar(b);
    return 0;
}
*/
