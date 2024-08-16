/*
** EPITECH PROJECT, 2022
** my_str_islower.c
** File description:
** 1 lowercase 0 otherwise
*/

#include <stdio.h>
int my_str_islower(char const *str)
{
    int low = 1;
    int i = 0;
    while (str[i] != '\0' && low == 1) {
        if (str[i] > 96 && str[i] < 123) {
            low = 1;
        } else {
            low = 0;
        }
        i++;
    }
    return low;
}
/*
int main()
{
    char str[]="he2llo";
    int n = my_str_islower(str);
    putchar(n+48);
}
*/
