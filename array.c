#include <stdio.h>
//#include <stdlib.h> 스탠다드 라이브러리 헤더파일
//#include <time.h>

int main(){
    int Scores[5];  //크기 5인 정수형 배열 [0, 1, 2, 3, 4]
    //srand((unsigned)time(NULL));
    printf("5명의 점수를 입력하시오: ");

    for(int i = 1; i <= 5; i++){
        scanf("%d", &Scores[i]);
        //Scores[i] = rand() % 101;
    }

    for(int i = 1; i <= 5; i++){
        printf("Score[%d] = %d\n", i, Scores[i]);
    }

    return 0;
}