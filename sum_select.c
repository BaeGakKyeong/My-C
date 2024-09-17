#include <stdio.h>

int main(){
    int num, count = 0, sum = 0;
    do{
        printf("자연수를 입력하시오: ");
        scanf("%d", &num);

        if(num > 0){
            count++;
            sum += num;
        }

        else{
            continue;
        }
    }while(count < 3);
    
    printf("입력된 세 자연수의 합계는 %d입니다.", sum);

    return 0;
}