#include <stdio.h>

int main(){
    char *p = "abc";

    printf("%s", p);    //printf("%s", *p); 를 작성하면 컴파일 경고가 발생한다. 

    return 0;
}

//간접참조연산자 *p는 p의 주소가 갖고 있는 실제 값(a)이, p에는 a가 담겨 있는 주소가 저장되어 있다. 

