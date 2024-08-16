/*
** EPITECH PROJECT, 2022
** my_strstr.c
** File description:
** str function
*/

#include <stdio.h>
char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int fin = 0;
    int encontrado = 0;
    while (str[fin] != '\0') {
        fin++;
    }
    while (i < fin && encontrado != 1) {
        if (str[i] == to_find[0]) {
            encontrado = 1;
        } else {
            i++;
        }
    }
    return &str[i];
}
/*
int main()
{
    char a[12]="holamundo";
    char b[7]="mun";
    char *p=my_strstr(a,b);
    int i = 0;
   while(p[i]!='\0'){
        putchar(p[i]);
        i++;
        }
    return 0;
    }
*/
