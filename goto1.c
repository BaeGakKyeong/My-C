//goto문을 사용하기 적합한 단 한가지 경우: 중첩 제어문을 빠저나갈 떄
#include <stdio.h>

int main(){
    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 10; j++){
            printf("*");
            
            if(j * j - i== 50){
                goto OUT;
            }
        }
        printf("\n");
    }

    OUT:

    return 0;
}