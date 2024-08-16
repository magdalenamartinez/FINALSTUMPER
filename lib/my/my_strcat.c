/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** concatenate 2 strings
*/

#include <stdio.h>
char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    int n = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        j++;
    }
    n = i + j + 1;
    j = 0;
    while (n > 0) {
        dest[i] = src[j];
        n--; i++; j++;
    }
    return (dest);
}
