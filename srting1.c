#include <stdio.h>

int main(){
    char array[4];

    array[0] = 'a';
    array[1] = 'b';
    array[2] = 'c';
    array[3] = '\0';    //array[3] = NULL; 과 같이 써주면 컴파일 오류가 발생한다.

    int i = 0;
    while(array[i] != '\0'){
        printf("%c", array[i]);
        i++;
    }

    return 0;
}