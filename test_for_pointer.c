/*
printf("%p", *pi); 코드는 컴파일 오류를 발생시킨다.
printf("%d", *pi); 코드는 컴파일 오류를 발생시키지 않고, 10을 출력한다.
printf("%d", &pi); 코드는 컴파일 오류를 발생시킨다. 
printf("%p", &pi); 코드는 컴파일 오류를 발생시키지 않고, 주소를 출력한다.
printf("%d", &i); 코드는 컴파일 오류를 발생시킨다.
printf("%p %p", &pi, &i); 코드는, 서로 다른 두 주소를 출력한다.
printf("%p %p", pi, &i); 코드는, 같은 코드를 출력한다.
printf("%d", pi); 코드는 컴파일 오류를 발생시킨다.
*/

#include <stdio.h>

int main(){
    int i = 10;
    int *pi = &i;

    printf("%p %p", pi, &i);

    return 0;

}