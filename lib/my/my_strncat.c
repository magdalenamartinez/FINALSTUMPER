/*
** EPITECH PROJECT, 2022
** my_strncat.c
** File description:
** concatenate characters
*/

#include <stdio.h>
char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0; int j = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (nb > 0) {
        dest[i] = src[j];
        i++; j++; nb--;
    }
    return dest;
}
/*
int main()
{
    char a[ ]="hello";
    char b[ ]="world";
    printf(my_strncat(a,b,2));
}
*/
