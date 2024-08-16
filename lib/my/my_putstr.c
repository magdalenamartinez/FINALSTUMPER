/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** displays chars of string
*/

#include <stdio.h>
void my_putchar(char c);
int  my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}

/*
int main(void)
{
    char *arr = "hello";
    my_putstr(arr);
    return 0;
}
*/
