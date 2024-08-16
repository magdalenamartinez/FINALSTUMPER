/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** copy a string into another
*/

#include <stdio.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/*
int main()
{
    char s[4] = "abc\0";
    char d[4];
    int i=0;
    char *r=my_strcpy(d,s);
    while(r[i]!='\0'){
        putchar(r[i]);
                i++;
                }
            return 0;
}
*/
