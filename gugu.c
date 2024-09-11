#include <stdio.h>

int main(){
    int num, i = 1;

    printf("자연수를 입력하시오: ");
    scanf("%d", &num);

    while(i < 10){
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}