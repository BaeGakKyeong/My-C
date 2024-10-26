#include <stdio.h>

int main(){
    int array[3];

    for(int i = 0; i < 3; i++){
        printf("&array[%d] = %p\n", i, &array[i]);
    }
    printf("%p", array);    //배열 이름은 그 배열에 대한 포인터이다.

    return 0;
}