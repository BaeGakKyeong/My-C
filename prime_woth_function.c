#include <stdio.h>

int prime(int num){
    int aliqout = 0;

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            aliqout += 1;
        }
        else{
            continue;
        }
    }

    if(aliqout == 2){
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(){
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    
    if(prime(num)){
        printf("%d는 소수입니다.", num);
    }
    else{
        printf("%d는 소수가 아닙니다.", num);
    }

    return 0;
}