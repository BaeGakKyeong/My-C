#include <stdio.h>

int main(){
    for (int row = 1; row <= 7; row++){
        for(int space = 1; space <= 7 - row; space++){
            printf(" ");
        }
        for(int star = 1; star <= row; star++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}