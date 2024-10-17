//랜덤한 수가 담긴 배열(A)과 0으로 모두 초기화된 배열(B) 두개를 선언, A에서 큰 값부터 차례로 B에 옮긴다.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void descending_order(int array1[], int size){
    int array2[SIZE] = {0}, largest, index, num = 0;

    while(1){
        for(int i = 0; i < SIZE - 1; i++){
            if(array1[i] > array1[i + 1]){
                largest = array1[i];    //배열 중 가장 큰 값을 0으로 초기화 시켜야 다음 큰 값을 찾음...
                index = i;
            }
        }
        array1[index] = 0;
        array2[num] = largest;
        num++;  

        if(num == SIZE){
            break;
        }      
    }

    for(int i = 0; i < SIZE; i++){
        printf("%d\t", array2[i]);
    }
}

int main(){
    srand((unsigned)time(NULL));
    int array1[SIZE];

    for(int i = 0; i < SIZE; i++){
        array1[i] = 1 + rand() % 1000;   //1 이상 1000 이하의 난수 생성, 배열에 무작위로 대입
        printf("%d\t", array1[i]);
    }
    printf("\n");

    descending_order(array1, SIZE);

    return 0;
}