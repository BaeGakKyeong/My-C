#include <stdio.h>

int main(){
    int input, price, change_1000, change_500, change_100, change;

    printf("계산할 금액을 입력하시오: ");
    scanf("%d", &price);

    printf("투입한 금액을 입력하시오: ");
    scanf("%d", &input);

    change = input - price;

    change_1000 = change / 1000;
    change_500 = (change - (change_1000 * 1000)) / 500;
    change_100 = (change - (change_1000 * 1000) - (change_500 * 500)) / 100;

    printf("1000원권 : %d장 \n500원권 : %d장 \n100원권 : %d장 \n", change_1000, change_500, change_100);
}