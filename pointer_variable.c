#include <stdio.h>

int main(){
    int i = 10;
    float f = 1.4;

    int *pi = NULL;
    float *pf = NULL;

    pi = &i;
    pf = &f;

    printf("%p\t%p\n", pi, &i);
    printf("%p\t%p\n", pf, &f); //주소의 값은 실행할 때 마다 달라진다.

    return 0;
}