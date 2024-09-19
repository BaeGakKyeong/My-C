#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int Dice[6] = {0};
    int side;

    srand((unsigned)time(NULL));

    for(int i = 1; i <= 1000; i++){
        side = rand() % 6;

        switch (side)
        {
        case 0:
            Dice[0] += 1;
            break;
        case 1:
            Dice[1] += 1;
            break;
        case 2:
            Dice[2] += 1;
            break;
        case 3:
            Dice[3] += 1;
            break;
        case 4:
            Dice[4] += 1;
            break;
        case 5:
            Dice[5] += 1;
            break;
        }

    }

    printf("주사위 1000번을 던져서 나온 각 눈의 갯수: \n");
    for(int i = 0; i < 6; i++){
        printf("%d의 눈: %d회\n", i + 1, Dice[i]);
    }

    return 0;
}

/*
    for(int i = 1; i <= 1000; i++){}
        ++Dice[rand() % 6];
    }
    
위의 코드를 사용하면, 긴 switch-case문을 사용하지 않아도 쉽게 코딩할 수 있다. 
*/