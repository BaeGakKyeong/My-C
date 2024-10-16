#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 5

int main(){
    srand((unsigned)time(NULL));
    int array[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        array[i] = rand() % 100;
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}