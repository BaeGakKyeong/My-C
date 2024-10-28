#include <stdio.h>

int my_strlen(char array[], int size);

int main(){
    char array[10] = {'H', 'E', 'L', 'L', 'O'};

    printf("저장된 문자열 = ");

    for(int i = 0; i < 10; i++){
        if(array[i] == 0){
            break;
        }
        printf("%c", array[i]);
    }

    printf("\n문자열의 길이 = %d", my_strlen(array, 10));

    return 0;
}

int my_strlen(char array[], int size){
    int count = 0;

    for(int i = 0; i < size; i++){
        if(array[i] != 0){
            count++;
        }
        else{
            break;
        }
    }

    return count;
}