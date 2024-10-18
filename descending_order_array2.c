/*
선택정렬(selection sort)을 사용하여 배열 정렬하기.
하나의 배열(A)에 난수를 무작위로 넣고, 다른 배열(B)에 오름차순으로 넣는다.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

int arrayB[SIZE] = {0};

void descending_order_array(int arrayA[], int size);

int main(){
    srand((unsigned)time(NULL));

    int arrayA[SIZE];

    for(int i = 0; i < SIZE; i++){
        arrayA[i] = rand() % 1000;
        printf("%d\t", arrayA[i]);
    }
    printf("\n");

    descending_order_array(arrayA, SIZE);

    for(int i = 0; i < SIZE; i++){
        printf("%d\t", arrayB[i]);
    }

    return 0;
}

void descending_order_array(int arrayA[], int size){
    int i, largest = -1, index = 0, num = 0;
    
    for(int j = 0; j < SIZE; j++){
        
        for(i = 0; i < SIZE; i++){
        
            if(largest < arrayA[i]){
                largest = arrayA[i];
                index = i;
            }
        }
        arrayB[num] = largest;
        arrayA[index] = -1;
        num++;
        largest = -1;
    }
}