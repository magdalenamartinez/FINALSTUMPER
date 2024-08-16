/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** returns a num sent as string
*/
#include <stdio.h>
int counterfunction(char const *str);
int whilefuncion(char const *str,int i);
int my_getnbr(char const *str)
{
    int number = 0; int i = 0; int signo = 1; int fin = 0; int salto = 0;
    if (str[i] == '-' && str[i + 1] != '+' && str[i + 1] != '-') {
        signo = -1; salto = 1; i++;
    }
    while ((str[i] == '+' || str[i] == '-') && salto != 1) {
        if (str[i] == '-') {
            signo = signo * -1;
        } else {
            signo = signo *1;
        }
        i++;
    }
    fin = counterfunction(str);
    if (fin == 0) {
        number = whilefuncion(str , i);
    }
    number = number * signo; return number;
}

int whilefuncion(char const *str,int i)
{
    int fin = 0; int number = 0;
    while (str[i] != '\0' && fin == 0) {
        if (str[i] >= '0' && str[i] <= '9') {
            number = number * 10;
            number = number + str[i] - '0';
        } else {
            fin = 1;
        }
        i++;
    }
    return number;
}

int counterfunction(char const *str)
{
    int counter = 0; int i = 0; int fin = 0;
    while (str[i] == '+' || str[i] == '-') {
        i++;
    }
    while (str[i] != '\0' && fin != 1) {
        if (str[i] >= '0' && str[i] <= '9') {
            counter++; i++;
        } else {
            fin = 1;
        }
    }
    if (counter > 10) {
        return 1;
    } else {
        return 0;
    }
}

/*
int main(void)
{
    char str[40]="-+99777777s777444443210nd2190";
    int c=my_getnbr(str);
    printf("num2:%i",c);
    return 0;
}
*/
