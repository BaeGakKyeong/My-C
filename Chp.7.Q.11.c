#include <stdio.h>

int main(){
    int fuel = 100, IaD; //increase and decrese
    char PaM;   //plus and minus

    while(1){
        printf("현재 연료량: %d\n", fuel);
        
        if(fuel < 20){
            printf("경고: 연료가 20리터 미만입니다.\n");
        }
        
        printf("연료 충전량은 +, 소모량은 -로 입력해주세요.(0을 입력하면 종료합니다): ");
        scanf("%c", &PaM);
        if(PaM == '0'){
            break;
        }

        scanf("%d", &IaD);

        if(PaM == '+'){
            fuel += IaD;
        }
        else if(PaM == '-'){
            fuel -= IaD;
        }


    }
}