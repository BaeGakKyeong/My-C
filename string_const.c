#include <stdio.h>

int main(){
    char *p = "HelloWorld";

    printf("%s\n", p);

    p = "Welcome to C world";
    printf("%s\n", p);

    p = "goodbye";
    printf("%s\n", p);

    //p[0] = 'a'; 오류를 발생시킨다.

    return 0;
}