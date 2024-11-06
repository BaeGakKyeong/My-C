#include <stdio.h>

int main(){
    char string1[] = "Hello, World!";
    char string2[sizeof(string1)];
    //char string2[] = "";                배열 사이즈를 설정하지 않을 경우, 오류가 발생할 위험이 큼

    int i = 0;
    while(string1[i] != '\0'){
        string2[i] = string1[i];        //이 코드에서, 메모리 오버플로우가 발생함. 따라서 string1의 데이터 역시 손상됨.
        i++;
    }
    string2[i] = '\0';

    printf("원본 배열: %s\n", string1);
    printf("복사된 배열: %s\n", string2);

    return 0;
}