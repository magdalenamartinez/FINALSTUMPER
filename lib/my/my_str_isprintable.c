/*
** EPITECH PROJECT, 2022
** my_str_isprintable.c
** File description:
** 1 contains printable characters 0 others
*/

#include <stdio.h>
int my_str_isprintable(char const *str)
{
    int print = 1;
    int i = 0;
    while (str[i] != '\0' && print == 1) {
        if (str[i] > 31 && str[i] < 127) {
            print = 1;
        } else {
            print = 0;
        }
        i++;
    }
    return print;
}
/*
int main()
{
    char str[ ]="12hdusjdo)";
    int n = my_str_isprintable(str);
    putchar(48+n);
}
*/
