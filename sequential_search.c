#include <stdio.h>

void selection_sort(int array[]);

int sequential_search(int array[], int num);

int main(){
    int array[10] = {8, 6, 7, 9, 5, 1, 3, 2, 4, 10}, num, key_index;

    printf("10 이하의 자연수를 입력하시오: ");
    scanf("%d", &num);

    printf("정렬 전 %d에 대한 index: %d\n", num, sequential_search(array, num));

    selection_sort(array);

    printf("정렬 후 %d에 대한 index: %d", num, sequential_search(array, num));

    return 0;
}

int sequential_search(int array[], int num){
    int key_index;

    for(int i = 0; i < 10; i++){
        if(array[i] == num){
            key_index = i;
        }
    }

    return key_index;
}

void selection_sort(int array[]){
    int index, j, least = 11;

    for(int i = 0; i < 9; i++){

        for(j = i; j < 10; j++){

            if(array[j] < least){
                least = array[j];
                index = j;
            }
        }
        array[index] = array[i];
        array[i] = least;
        least = 11;
    }
}
