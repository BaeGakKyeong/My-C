#include <stdio.h>

int left_star(int);
int right_star(int);

int main(){
    int num, type;

    printf("정수 입력: ");
    scanf("%d", &num);

    printf("유형 선택(1 또는 2): ");
    scanf("%d", &type);

    if (type == 1)
    {
        left_star(num);
    }
    
    else if (type == 2)
    {
        right_star(num);
    }

    else
    {
        printf("정해진 유형이 아닙니다.");
    }

    return 0;
}

int left_star(int num){
    for (int i = 0; i <= num; i++){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int right_star(int num){
    for (int i = num; i > 0; i--){
        for (int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}