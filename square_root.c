#include <stdio.h>
#include <math.h>

int main(){
    double v;

    while (1){
        printf("실수값을 입력하시오: ");
        scanf("%lf", &v);

        if(v < 0.0){
            break;
        }

        printf("%lf의 제곱근은 %lf입니다.\n", v, sqrt(v));
    }

    return 0;
}

/*
교재에는 무한루프와 브레이크문을 활용하여 예시를 들었지만, 이 경우에는 do-while문을 쓰는 것이 더 좋다.

double v;

do{
    printf("실수값을 입력하시오: ");
    scanf("%lf", &v)
}while(v < 0.0);

return 0;

이처럼 do-while문을 사용하면 공간을 많이 절약할 수도 있고, 보기에도 간결하다.
또한 반드시 한번 이상 반복해야 하는 경우에는 do-while을 써야한다. 
*/