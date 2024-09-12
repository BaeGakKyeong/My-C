#include <stdio.h>
#include <stdlib.h>

int main(){
    srand((unsigned)time(NULL));    //난수 발생기 시드 설정

    int answer = rand()%100+1;  //정답을 난수로 발생한다
    int guess, tries = 0;

    do{
        printf("정답을 추측하여 보시오: ");
        scanf("%d", &guess);
        tries++;

        if(guess < answer){
            printf("LOW");
        }
        else if(guess > answer){
            printf("HIGH");
        }
    }while(guess != answer);

    printf("축하합니다. 시도 횟수: %d", tries);

    return 0;
}