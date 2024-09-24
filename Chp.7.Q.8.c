#include <stdio.h>

int main(){
    for(int row = 1; row <= 5; row++){
        for(int num = 1; num <= row; num++){
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}