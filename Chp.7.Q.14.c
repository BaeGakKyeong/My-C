//사용자로부터 자연수 n을 입력받아, 피보나치 수열의 n번째 항의 값을 1번째 항 부터 구하는 프로그램

#include <stdio.h>

int main(){
    int f0 = 0, f1 = 1, fn = 2, fm = 1, n;  //fn-1을 fm이라고 하자.

    printf("2 이상의 자연수를 입력하시오: ");
    scanf("%d", &n);

    printf("피보나치 수열의 값:\n%d %d", f0, f1);
    for(int i = 1; i < n - 1; i++){
        printf(" %d", fn);
        fn += fm;
        fm = fn - fm;
    }

    return 0;
}


/* GPT의 코드
for (int i = 2; i < n; i++) {
        fn = f0 + f1; // 다음 항은 이전 두 항의 합
        printf(" %d", fn);
        f0 = f1;      // f0을 f1으로 갱신
        f1 = fn;      // f1을 fn으로 갱신
*/