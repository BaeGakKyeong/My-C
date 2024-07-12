#include <stdio.h>

int main(){
    short x = 10, y = 20, z = 0;

    printf("x = %d, y = %d\n", x, y);

    z = x;
    x = y;
    y = z;

    printf("x = %d, y = %d", x, y);

    return 0;
}