#include <stdio.h>

int main(){
    int num, factorial = 1;

    printf("자연수를 입력하시오: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        factorial *= i;
    }

    printf("%d!의 값은 %d입니다.\n", num, factorial);
    
    return 0;
}