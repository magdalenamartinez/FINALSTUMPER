/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** allocate memory and copies the string
*/

#include <stdio.h>
#include <stdlib.h>
int my_putstr(char const *str);
char *my_strdup(char const *src)
{
    int i = 0; int tam = 0;
    char *s;
    while (src[tam] != '\0') {
        tam++;
    }
    s = malloc(sizeof(char)*(tam + 1));
    while (i < tam) {
        s[i] = src[i];
        i++;
    }
    s[i] = '\0';
    my_putstr(s);
    putchar('\n');
    free(s);
    return 0;
}

/*
int main()
{
    char src[ ]="hello";
    my_strdup(src);
}
*/
