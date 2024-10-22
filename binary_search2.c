#include <stdio.h>

void selection_sort(int array[]);
int binary_search(int array[], int num);
void print_array(int array[]);
int loop = 0;

int main(){
    int array[10] = {2, 4, 6, 9, 1, 7, 3, 7, 8, 10}, num;

    printf("정렬 전 배열:\n");
    print_array(array);

    selection_sort(array);

    printf("정렬 후 배열:\n");
    print_array(array);

    printf("10 이하의 자연수를 입력하시오: ");
    scanf("%d", &num);

    printf("인덱스 번호: %d\n루프를 돈 횟수:%d\n", binary_search(array, num), loop);

    return 0;
}

void selection_sort(int array[]){
    for(int i = 0; i < 9; i++){
        int least_index = i;
        for(int j = i + 1; j < 10; j++){
            if(array[j] < array[least_index]){
                least_index = j;
            }
        }

        int temp = array[i];
        array[i] = array[least_index];
        array[least_index] = temp;
    }
}

int binary_search(int array[], int num){
    int low = 0, high = 9;

    while(low <= high){
        loop++;
        int middle = (low + high) / 2;

        if(array[middle] == num){
            return middle;
        }
        else if(array[middle] > num){
            high = middle - 1;
        }
        else{
            low = middle + 1;
        }
    }

    return -1;
}

void print_array(int array[]){
    for(int i = 0; i < 10; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}
