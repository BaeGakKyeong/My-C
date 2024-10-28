#include <stdio.h>

int main(){
    int array[3];

    for(int i = 0; i < 3; i++){
        printf("정수를 입력하시오: ");
        scanf("%d", &array[i]);
    }

    printf("=======================\n");
    printf("주소\t값\n");
    printf("=======================\n");

    for(int i = 0; i < 3; i++){
        printf("%08X\t%03d\n", (unsigned)&array[i], array[i]);
    }

    return 0;
}