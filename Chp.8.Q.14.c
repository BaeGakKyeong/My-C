#include <stdio.h>

int prime_num(int num){
    for(int i = 2; i <= num / 2; i++){
        if(num % i == 0){
            return 0;      //소수가 아닐 경우 0을 반환
        }
    }

    return 1;              //소수일 경우 1을 반환
}

void PpP(int num){           //prime num plus prime num
    for(int i = 4; i <= num - 2; i++){
        if(prime_num(i)){
            if(prime_num(num - i)){
                printf("%d = %d + %d\n", num, i, num - i);
            }
        }
    }
}

int main(){
    int num;

    printf("자연수를 입력하시오: ");
    scanf("%d", &num);

    PpP(num);

    return 0;
}
