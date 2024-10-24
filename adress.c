#include <stdio.h>

int main(){
    int i = 1;
    char c = 67;
    float f = 1.4;

    printf("int i의 주소: %p\n", &i);
    printf("char c의 주소: %p\n", &c);
    printf("float f의 주소: %p", &f);

    return 0;
}