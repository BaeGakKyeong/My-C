/*
선택정렬 알고리즘을 활용하여 무작위의 배열을 오름차순으로 정렬해 보자.
최솟값을 찾고, 그 최솟값을 배열의 가장 첫 인덱스로 옮긴다.
두번째로 가장 작은 값을 찾고, 그 값을 배열의 두번째 인덱스로 옮긴다.
위 과정을 반복하면 배열을 오름차순으로 정렬할 수 있는데, 이를 선택정렬(selection sort)이라고 한다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void selection_sort(int array[]);

int main(){
    srand((unsigned)time(NULL));

    int array[SIZE];

    for(int i = 0; i < SIZE; i++){
        array[i] = 1 + rand() % 100;
        printf("%d\t", array[i]);
    }
    printf("\n");

    selection_sort(array);

    for(int i = 0; i < SIZE; i++){
        printf("%d\t", array[i]);
    }

    return 0;    
}

void selection_sort(int array[]){
    int least = 101, j, index = 0;

    for(int i = 0; i < SIZE - 1; i++){

        for(j = i; j < SIZE; j++){

            if(least > array[j]){
                least = array[j];
                index = j;
            }
        }
        array[index] = array[i];
        array[i] = least;
        least = 101;
    }
}