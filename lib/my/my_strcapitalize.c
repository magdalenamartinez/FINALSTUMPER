/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** capitalizes the first letter of each word
*/

#include <stdio.h>
char *my_strcapitalize(char *str)
{
    int si = 1;
    int i = 0;
    while (str[i] != 0) {
        if (str[i] > 96 && str[i] < 123 && si == 1) {
            str[i] = str[i] - 32;
        }
        if (str[i] > 64 && str[i] < 91 && si == 0) {
            str[i] = str[i] + 32;
        }
        si = 0;
        if (str[i] < 47 && str[i + 1] > 96 && str[i + 1] < 123) {
            si = 1;
        }
        if (str[i] < 47 && str[i + 1] > 64 && str[i + 1] < 91) {
            si = 1;
        }
        i++;
    }
    return (str);
}
/*
int main()
{
    int i = 0;
    char str[ ]="Hey, how are you? 42WORds Forty-Two; fifty+one";
    char *r=my_strcapitalize(str);
    while(r[i]!='\0'){
        putchar(r[i]);
        i++;
        }
        }
*/
