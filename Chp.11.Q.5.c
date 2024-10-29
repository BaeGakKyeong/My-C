#include <stdio.h>

int main(){
    char array[1000] = {0};

    array[0] = 'a';
    array[1] = 100;
    array[2] = 3.14;

    printf("%c\t%d\t%f", *array, *(array + 1), *(array + 2));

    return 0;
}