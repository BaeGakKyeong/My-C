#include <stdio.h>

int loop = 0;

void selection_sort(int array[]);

int binary_search(int array[], int num);

void print_loop(int array[]){
    for(int i = 0; i < 10; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int main(){
    int array[10] = {8, 1, 4, 9, 10, 7, 5, 3, 2, 6}, num;

    printf("10 이하의 자연수를 입력하시오: ");
    scanf("%d", &num);

    print_loop(array);

    selection_sort(array);

    print_loop(array);

    printf("index num: %d\n이진탐색을 위해 루프를 돈 횟수: %d", binary_search(array, num), loop);

    return 0; 
}

void selection_sort(int array[]){
    int j, index, least = 11;

    for(int i = 0; i < 9; i++){

        for(j = i; j < 10; j++){

            if(least > array[j]){
                least = array[j];
                index = j;
            }
        }
        array[index] =  array[i];
        array[i] = least;
        least = 11;
    }
}

int binary_search(int array[], int num){
    int index = 5, key_index = 11;

    do{
        if(array[index] > num){
            loop++;
            index /= 2;
            continue;
        }
        else if(array[index] < num){
            loop++;
            index = (index / 2) + index;
            continue;
        }
        else{
            loop ++;
            key_index = index;
        }
    } while (key_index == 11);
    
    return key_index;
}