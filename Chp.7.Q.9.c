/*
두 수의 최소공배수를 찾는 프로그램:
    1. 두 수의 대소 비교
    2. 두 수의 최대공약수 찾기
    3. 최소공배수 = 최대공약수 * (한 정수 / 최대공약수) * (다른 한 정수 / 최대공약수)
*/

#include <stdio.h>

int main(){
    int num_1, num_2, high, low, GCD;

    printf("두 정수를 입력하시오: ");
    scanf("%d %d", &num_1, &num_2);

    //두 수의 대소 비교
    if(num_1 < num_2){
        high = num_2;
        low = num_1;
    }
    else if(num_2 < num_1){
        high = num_1;
        low = num_2;
    }
    else{
        high = num_1;
        low = num_2;
    }
    
    //최대공약수 찾기
    for(int i = low; i >= 1; i--){
        if(high % i == 0){
            if(low % i == 0){
                GCD = i;
                break;
            }
        }
    }

    //최소공배수 계산
    printf("두 수의 최소공배수는 %d입니다.", GCD * (high / GCD) * (low / GCD));

    return 0;
}