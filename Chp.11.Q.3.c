#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void array_fill(int array[], int size){
    srand((unsigned)time(NULL));

    for(int i = 0; i < size; i++){
        array[i] = rand() % 1000;
    }
}

int main(){
    int array[10] = {0};

    array_fill(array, 10);

    for(int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }

    return 0;
}