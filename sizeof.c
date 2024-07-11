#include <stdio.h>

int main(){
    int x;
    printf("size of variable    x: %d\n", sizeof(x));
    printf("size of             char: %d\n", sizeof(char));
    printf("size of             int: %d\n", sizeof(int));
    printf("                    short: %d\n", sizeof(short));
    printf("                    long: %d\n", sizeof(long));
    printf("                    long long: %d\n", sizeof(long long));
    printf("                    float: %d\n", sizeof(float));
    printf("                    double: %d\n", sizeof(double));
    printf("                    long double: %d", sizeof(long double));

    return 0;
}