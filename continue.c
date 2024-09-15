#include <stdio.h>

int main(){
    for (int i = 1; i <= 10; i++){
        if(i % 3 == 0){     
            continue;   //3의 배수를 만나면 루프의 처음으로 즉시 돌아가서 다음 루프를 실행한다. 
        }

        printf("%d ", i);
    }

    return 0;
}