/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** copies n characters from a string into another
*/

#include <stdio.h>

char *my_strncpy(char * dest, char const *src, int n)
{
    int i = 0; int counter = 0;
    while (n > 0) {
        dest[i] = src[i]; i++; n--;
    }
    while (src[counter] != '\0') {
        counter++;
    }
    if (counter < n) {
        dest[i] = '\0';
    }
    return (dest);
}

/*
int main()
{   int i =0;
    char src[6]="helloo";
    int n=8;
    char d[n];
    char *c=my_strncpy(d,src,n);
    while(c[i]!='\0')
    {
        putchar(c[i]);
        i++;
    }
    return 0;
}
*/
