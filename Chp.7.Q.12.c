#include <stdio.h>

int main(){
    int hight;
    
    do{
        printf("막대의 높이(종료: 0 입력): ");
        scanf("%d", &hight);

        for(int i = 1; i <= hight; i++){
            printf("*\n");
        }
    }while(hight != 0);

    return 0;
}