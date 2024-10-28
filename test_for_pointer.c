/*
printf("%p", *pi); 코드는 컴파일 오류를 발생시킨다.
printf("%d", *pi); 코드는 컴파일 오류를 발생시키지 않고, 10을 출력한다.
printf("%d", &pi); 코드는 컴파일 오류를 발생시킨다. 
printf("%p", &pi); 코드는 컴파일 오류를 발생시키지 않고, 주소를 출력한다.
printf("%d", &i); 코드는 컴파일 오류를 발생시킨다.
printf("%p %p", &pi, &i); 코드는, 서로 다른 두 주소를 출력한다.
printf("%p %p", pi, &i); 코드는, 같은 주소를 출력한다.
printf("%d", pi); 코드는 컴파일 오류를 발생시킨다.

%p는 &(변수명) 이거나, *로 선언된 변수와 함께 쓰인다. 주의할 점은 *를 떼고 써야 한다.
여기서 %p와 함께 &pi를 쓰면, 포인터의 주소를 불러와 출력한다.
또한 *(변수명)은 %d와 함께 쓰일 경우, 해당 메모리의 주소가 아닌 실제 값을 읽어와 출력한다.

*/

#include <stdio.h>

int main(){
    int i = 10;
    int *pi = &i;

    printf("%p %p", pi, &i);

    return 0;

}