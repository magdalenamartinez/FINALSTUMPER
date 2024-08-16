/*
** EPITECH PROJECT, 2022
** my_strlowcase.c
** File description:
** every letter in lowercase
*/

#include <stdio.h>
char *my_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] > 64 && str[i] < 91) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}
