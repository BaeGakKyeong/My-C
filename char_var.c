//아스키 코드의 이해
#include <stdio.h>

int main(){
    char code1 = 'A';
    char code2 = 65;

    printf("%d\n", code1);  //A를 10진 형태로 출력
    printf("%c", code2);    //65를 아스키코드의 문자값으로 출력

    return 0;
}