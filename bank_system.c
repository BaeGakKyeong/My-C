#include <stdio.h>
#include <stdlib.h>

void line(){
    printf("==============================================\n");
}

int balance(int money);

int main(){
    int money;

    line();
    printf("입금\t\t출금\t\t잔고\n");
    line();
    printf("\t\t\t\t%d\n", balance(0));
    line();

    while(1){
        printf("금액을 입력하시오(종료하려면 0을 입력하시오)... ");
        scanf("%d", &money);
        line();

        if(money > 0){
            printf("%d\t\t\t\t%d\n", money, balance(money));
        }

        else if(money < 0){
            printf("\t\t%d\t\t%d\n", abs(money), balance(money));
        }
        else if(money == 0){
            printf("정상종료...");
            exit(EXIT_SUCCESS);
        }
        else{
            printf("비정상 종료...");
            exit(EXIT_FAILURE);
        }
    }
}

/*
int balance(int money){
    static int B = 0;

    return B + money;
}
static형식지정자는 선언된 코드블럭 내에서만 값을 달리할 수 있으며, 선언될 때 한번만 초기화 한다.
하지만 위 함수의 경우, static형식지정자를 사용하였음에도 호출 될 때마다 항상 초기화 혹은 달라진 변수가 저장이 되지 않는다.
무슨 문제일까? ChatGPT의 도움으로는 해결되지 않았다. 
*/


int balance(int money){
    static int B = 0;
    B += money;
        
    return B;
}