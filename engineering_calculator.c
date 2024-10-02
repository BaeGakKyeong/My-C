#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu(){
    int num;

    printf("1. factorial\n2. sine\n3. log(base 10)\n4. squre number\n5. nPr\n6. nCr\n7. Quite\n");
    printf("select menu... ");
    scanf("%d", &num);

    return num;
}

int factorial(int num){
    int fac = 1;
    
    for(int i = 1; i <= num; i++){
        fac *= i;
    }

    return fac;
}

int permutation(int n, int r){
    return factorial(n) / factorial(n - r);
}

int combination(int n, int r){
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main(){
    int menu_num = menu();
    int n, r;               //switch-case문 작성시, case문 내부에서 변수를 선언하면 컴파일 오류가 발생함.
    double x;

    switch (menu_num)
    {
    case 1:
        
        printf("input natural number: ");
        scanf("%d", &n);

        printf("%d! = %d", n, factorial(n));

        break;
    
    case 2:

        printf("input radian value: ");
        scanf("%lf", &x);

        printf("sin(%lf) = %lf", x, sin(x));

        break;

    case 3:

        printf("input real number: ");
        scanf("%lf", &x);

        printf("log%lf = %lf", x, log10(x));

        break;

    case 4:

        printf("input positive real value: ");
        scanf("%lf", &x);

        printf("root%lf = %lf", x, sqrt(x));

        break;

    case 5:

        printf("nPr... \nvalue n: ");
        scanf("%d", &n);
        printf("value r: ");
        scanf("%d", &r);

        printf("P(%d, %d) = %d", n, r, permutation(n, r));

        break;

    case 6:

        printf("nCr... \nvalue n: ");
        scanf("%d", &n);
        printf("value r: ");
        scanf("%d", &r);

        printf("C(%d, %d) = %d", n, r, combination(n, r));

        break;

    case 7:
        exit(EXIT_SUCCESS);

        break;

    default:
        exit(EXIT_FAILURE);
    }

    return 0;
}