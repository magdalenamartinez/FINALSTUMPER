/*
** EPITECH PROJECT, 2022
** my_sort_int_array.c
** File description:
** int array in asceding order
*/

#include <stdio.h>
void my_sort_int_array(int *array, int size)
{
    int i = 0;
    char temp;
    int s = size;
    while (s > 0) {
        if (array[i + 1] < array[i]) {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            i++;
        }
        s--;
    }
    i = 0;
    while (i != size) {
        putchar(array[i] + 48);
        i++;
    }
}
/*
int main(void)
{
    int array[]={2,1,6,3};
    my_sort_int_array(array,4);
    return 0;
}
*/
