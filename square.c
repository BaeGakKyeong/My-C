#include <stdio.h>

int main(){
    int num, result = 1;

    printf("자연수를 입력하시오: ");
    scanf("%d", &num);

    for(int i = 1; i < 7; i++){
        result *= num;
        printf("%d ^ %d = %d\n", num, i, result);
    }

    return 0;
}