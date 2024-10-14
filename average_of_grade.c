#include <stdio.h>
#include <stdarg.h>

int avg(int count, ...);

int main(){
    int count = 0, grade;
    printf("성적을 입력하고, 엔터를 누르세요(음수를 입력하면 종료합니다)... ");
    
    while(1){
        scanf("%d", &grade);

        if (grade > 0){
            count++;
        }
        else{
            break;
        }
    }
    
}