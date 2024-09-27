//n개의 난수를 생성해서, 작은 수 부터 오름차순으로 정렬하는 프로그램

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//배열에 난수를 대입한다.
int produce_random_num(int arrange_S1[], int size_S1){
    
    srand(time(NULL));

    for(int i = 1; i <= size_S1; i++){

        arrange_S1[i] = rand() % 100 + 1;
        
        return arrange_S1[size_S1];
    }
}

//배열[n + 1]의 값과 배열[n]의 값의 비교를 통해 난수를 정렬한다. 이때, for문을 도는 횟수는 배열의 사이즈 size_S2값이다.
int array(int arrange_S2[], int size_S2){
    
    int stay = 0, k = 1;

    while(k <= size_S2){
       for(int i = 1; i < size_S2; i++){
           if(arrange_S2[i + 1] >= arrange_S2[i]){
               continue;
            }
        else{
            stay = arrange_S2[i];
            arrange_S2[i] = arrange_S2[i + 1];
            arrange_S2[i + 1] = stay;
            }
        }
    k++;
    }

    return arrange_S2[size_S2];
}

int main(){
    srand(time(NULL));

    int size, i;
    
    printf("100 이하의 자연수를 입력하시오: ");
    scanf("%d", &size);

    int arrange_M[size];

    produce_random_num(arrange_M, size);

    printf("생성된 난수의 갯수: %d\n", size);
    for(i = 1; i <= size; i++){
        printf("%d ", arrange_M[i]);
    }
    printf("\n");

    array(arrange_M, size);

    printf("생성된 난수의 정렬: \n");
    for(int i = 1; i <= size; i++){
        printf("%d ", arrange_M[i]);
    }

    return 0;
}