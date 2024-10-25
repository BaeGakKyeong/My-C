#include <stdio.h>

int main(){
    int *p = NULL;
    int n = 10;
    p = &n;

    printf("n값: %d, n의 주소값: %p\n", n, p);  //예상되는 값: 10, (랜덤주소A)

    int v;
    v = *p++;   //pointer p를 v에 대입, p의 '주소'증가

    printf("v값: %d, n의 주소값: %p\n", v, p);    //예상되는 값: 10, A + 4

    p--;

    v = (*p)++;

    printf("v값: %d, n값: %d\n", v, n);   //예상되는 값: 10, 11

    (*p)--;

    v = *++p;

    printf("v값: %d\n", v);   //예상되는 값: 쓰레기값

    p--;

    v = ++*p;

    printf("v값: %d, n값: %d", v, *p);   //예상되는 값: 11, 11

    return 0;
}