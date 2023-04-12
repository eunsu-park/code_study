// p.140
#include <stdio.h>

int main()
{
    int Data = 0x11223344;

    printf("%08X\n", Data & 0xFFFF0000);
    printf("%08X\n", Data & 0x00FFFF00);
    printf("%08X\n", Data & 0x0000FFFF);
    printf("%08X\n", Data & 0xFF0000FF);

    return 0;
}