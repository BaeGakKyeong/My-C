#include <stdio.h>

int main(){
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0){
            sum += i;
        }
    }

    printf("1부터 100까지 3의 배수의 합: %d", sum);

    return 0;
}