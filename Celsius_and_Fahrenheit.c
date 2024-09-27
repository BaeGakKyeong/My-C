//섭씨는 화씨, 화씨는 섭씨로 바꾸는 프로그램을 작성하라.

#include <stdio.h>

void line(){
    printf("============================\n");
}

char select_menu(){
    char select;
    
    line();
    printf("섭씨온도 --> 화씨온도: c\n");
    printf("화씨온도 --> 섭씨온도: f\n");
    printf("종료: q\n");
    line();

    printf("제시된 메뉴중 하나를 선택해 주세요: ");
    scanf(" %c", &select);   //반복루프에서 문자를 입력받을 때, 버퍼의 줄바꿈 문자를 지우기 위해 %c앞에 공백을 넣어준다.

    return select;
}

int CtoF(){
    int C_temp;
    printf("섭씨 온도를 입력하세요: ");
    scanf("%d", &C_temp);

    return 9.0 / 5.0 * C_temp + 32;
}

int FtoC(){
    int F_temp;
    printf("화씨 온도를 입력하시오: ");
    scanf("%d", &F_temp);   

    return (F_temp - 32.0) * 5.0 / 9.0;
}

int main(){
    while(1){
        char selection = select_menu();

        if(selection == 'q'){                       //코드의 가독성을 위해 if-else문 대신 switch-case문을 사용하는것이 더 적절하다. 
            break;                                  //default문을 사용하면 q, c, f 외 다른 문자가 입력됐을 때 처음으로 돌아가도록 코딩할 수 있다.
        }
        else if(selection == 'c'){
            line();
            int F_temp = CtoF();                    //변수 선언을 반복문 안에 넣으면, 매번 메모리를 새로 할당해야 해 복잡도가 더 커진다.
            printf("화씨온도는 %d입니다.\n", F_temp);
        }
        else if(selection == 'f'){
            int C_temp = FtoC();
            printf("섭씨온도는 %d입니다.\n", C_temp);
        }
        else{
            printf("주어진 문자가 아닙니다.\n");
            continue;
        }
    }
    
    return 0;
}