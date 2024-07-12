#include <stdio.h>

int main(){
    short x = 10, y = 20;

    printf("x = %d, y = %d\n", x, y);

    x += y;
    y = x - y;
    x = x - y;

    printf("x = %d, y = %d", x, y);

    return 0;
}