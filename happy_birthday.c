#include <stdio.h>

void happy_birthday_song(int age_S){
    printf("생일 축하 합니다\n");
    printf("생일 축하 합니다\n");
    printf("사랑하는 친구의 %d번째 생일을 축하합니다.", age_S);
}

int main(){
    int age_M;

    printf("나이를 입력하시오: ");
    scanf("%d", &age_M);

    happy_birthday_song(age_M);

    return 0;
}