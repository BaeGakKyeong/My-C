#include <stdio.h>


int main(){
    //char array[]; 이 문장은 컴파일 오류를 발생시킨다.
    char *p = NULL;

    scanf("%s", p); // --> scanf()로 문자열을 받을 때, p가 const로 지정되어 있어서

    printf("%s", p);

    return 0;
}
//위 코드는 버스 에러를 발생시킨다.

/*
int main(){
    char array[100];

    scanf("%s", array);

    printf("%s", array);

    return 0;
}
*/