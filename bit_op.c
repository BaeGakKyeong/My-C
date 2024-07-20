#include <stdio.h>

int main(){
    printf("and : %08x\n", 0x9 & 0xA);      //%08x: 16진수에서 앞 8자리를 공백으로 채우고, 그 공백을 다시 0으로 바꿔 출력한다.
    printf("or : %08x\n", 0x9 | 0xA);       //16진수에서는 앞에 0x를 붙여 표현
    printf("xor : %08x\n", 0x9 ^ 0xA);
    printf("not : %08x\n", ~0x9);
    printf("<< : %08x\n", 0x4 << 1);
    printf(">> : %08x", 0x4 >> 1);

    return 0;
}