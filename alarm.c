#include <stdio.h>
#include <unistd.h>

int main(){
    int sec;
    printf("시간을 입력하시오(단위: 초): ");
    scanf("%d", &sec);

    for(int i = 1; i <= sec; i++){
        printf("%d ", i);
        fflush(stdout); //출력버퍼를 비운다. 이 라인을 써 주지 않으면, 아래 "끝났습니다"와 함께 카운팅된 숫자가 출력된다.
        sleep(1);    //1초동안 프로그램을 재운다.
    }
    printf("\n끝났습니다.\a");

    return 0;
}