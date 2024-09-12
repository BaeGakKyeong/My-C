#include <stdio.h>

int main(){
    int sum = 0, num = 0, grade = 0;

    while(grade >= 0){
        printf("성적을 입력하시오(중단하려면 음수를 입력하시오): ");
        scanf("%d", &grade);

        if(grade >= 0){
        sum += grade;
        num++;
        }
    }
    printf("성적의 평균은 %d입니다.", sum / num);

    return 0;
}