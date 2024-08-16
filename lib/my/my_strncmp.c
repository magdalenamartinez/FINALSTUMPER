/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** reproduce strcmp behaviour
*/

#include <stdio.h>
int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = n; int j = 0; int j2 = 0; int i = 0;
    while (a > 0 && s1[i] == s2[i]) {
        a--; i++;
    }
    if (n == i) {
        return 0;
    } else {
        while (s1[j] != '\0') {
            j++;
        }
        while (s2[j2] != '\0') {
            j2++;
        }
        if (j >= j2) {
            return 1;
        } else {
            return -1;
        }
    }
}

/*
int main()
{
    char a[ ]="hello";
    char b[ ]="haaaaaa";
    int n=2;
    int d= my_strncmp(a,b,n);
    if(d==0){printf("equals");}
    else if(d>0){printf("s1 mayor que s2");}
    else {printf("s1 menor q s2");}
    return 0;
    }*/
