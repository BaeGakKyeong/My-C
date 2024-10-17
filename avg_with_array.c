#include <stdio.h>
#define STUDENTS 5

int average(int score[], int size);

int main(){
    int score[STUDENTS] = {54, 76, 98, 43, 87};

    for(int i = 0; i < STUDENTS; i++){
        printf("각 학생의 점수: %d\n", score[i]);
    }
    printf("점수의 평균 : %d", average(score, STUDENTS));   //배열을 인수로 넘겨줄 때, 대괄호 []를 제거하고 작성

    return 0;
}

int average(int score[], int size){
    int sum = 0;

    for(int i = 0; i < STUDENTS; i++){
        sum += score[i];
    }

    return sum / STUDENTS;
}