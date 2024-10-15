#include <stdio.h>

int binary(int n){
    if(n == 1){
        printf("1");
        return 0;
    }
    else if(n > 1){
        printf("%d", n % 2);
        return binary(n/2);
    }
}

int main(){
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    
    printf("%d의 2진수는...", num);
    binary(num);

    return 0;
}