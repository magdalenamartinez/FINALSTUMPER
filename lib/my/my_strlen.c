/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** counts and returns str
*/
#include <stdio.h>

int my_strlen(char const *str)
{
    int counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    return counter;
}
/*
int main(void)
{
    int a;
    char *str = "ho";
    a = my_strlen(str);
    a = a + 48;
    putchar(a);
    return 0;
}
*/
