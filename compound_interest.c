#include <stdio.h>

int main(){
    float principal, interest;
    int period;

    printf("원금을 입력하시오: ");
    scanf("%f", &principal);

    printf("이율을 입력하시오: ");
    scanf("%f", &interest);

    printf("기간을 입력하시오(년): ");
    scanf("%d", &period);

    printf("==============\n");
    printf("연도\t원리금\n");
    printf("==============\n");

    for(int i = 1; i <= period; i++){
        principal = principal * (1 + (interest / 100));
        printf("%d\t%f\n", i, principal);
    }

    return 0;
}