// p.136
#include <stdio.h>

int main()
{
    int Data = 0x11223344;

    printf("%08X\n", Data & 0x00FFFF00); // And, 00223300
    printf("%08X\n", Data | 0x2211FFFF); // OR, 3333FFFF
    printf("%08X\n", Data ^ 0x2211FFFF); // XOR, 3333CCBB
    printf("%08X\n", ~Data); // 보수, EEDDCCBB
    printf("%08X\n", Data >> 8); // 오른쪽으로 8bit shift, 00112233
    printf("%08X\n", Data << 16); // 왼쪽으로 16bit shift, 33440000

    return 0;
}