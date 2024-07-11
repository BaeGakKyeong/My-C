#include <stdio.h>

int main(){
    int x = 10, y = 010, z = 0x10;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n\n", z);

    printf("decimal number 10 = %d\n", x);
    printf("octal number 10 = %o\n", x);
    printf("hexadecimal number 10 = %x\n", x);

    return 0;
}