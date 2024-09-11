#include <stdio.h>

int main(){
    int score;

    printf("성적을 입력하시오; ");
    scanf("%d", &score);

    if(score >= 90){
        printf("학점 A");
    }
    else if(score >= 80){
        printf("학점 B");
    }
    else if(score >= 70){
        printf("학점 C");
    }
    else{
        printf("학점 F");
    }

    return 0;
}
