#include <stdio.h>

int main(){
    int i = 10;
    float f = 1.4;

    int *pi = &i;   //포인터를 초기화 할 때는 int *pi = (int *)10000; 처럼 절대주소를 사용하지 않는다.
    float *pf = &f; //포인터 변수를 초기화 할 때는 int *pf = NULL; 처럼 NULL값을 사용한다.

/*
    pi = &i;
    pf = &f;
*/
    printf("%p\t%p\n", pi, &i);
    printf("%p\t%p\n", pf, &f); //주소의 값은 실행할 때 마다 달라진다.

    return 0;
}