/*
** EPITECH PROJECT, 2022
** my_str_isalpha.c
** File description:
** return 1 if alphabetical and 0 other type
*/

#include <stdio.h>
int my_str_isalpha(char const *str)
{
    int i = 0; int alp = 1;
    while (str[i] != '\0' && alp == 1) {
        if (str[i] > 64 && str[i] < 90) {
            alp = 1;
        } else {
            alp = 0;
        }
        if (str[i] < 123 && str[i] > 96) {
            alp = 1;
        } else {
            alp = 0;
        }
        i++;
    }
    if (alp == 1) {
        return 1;
    } else {
        return 0;
    }
}
/*
int main()
{
    char str[ ]="aaaddsfdefef";
    int n = my_str_isalpha(str);
    if (n == 1) {
        printf("alphabetical");
    } else if (n == 0) {
        printf("not alphabetical");
    }
}
*/
