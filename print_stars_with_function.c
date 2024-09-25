#include <stdio.h>

void print_stars(){
    for(int i = 1; i <= 20; i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    print_stars();

    printf("Hello, World!\n");

    print_stars();

    return 0;
}