/*
** EPITECH PROJECT, 2022
** my_str_isnum.c
** File description:
** 1 digits 0 otherwise
*/

#include <stdio.h>
int my_str_isnum(char const *str)
{
    int i = 0;
    int dig = 1;
    while (str[i] != '\0' && dig == 1) {
        if (str[i] > 47 && str[i] < 58) {
            dig = 1;
        } else {
            dig = 0;
        }
        i++;
    }
    return dig;
}
/*
int main()
{
    char str[ ]="22223";
    int n=my_str_isnum(str);
    putchar(48+n);
    return 0;
}
*/
