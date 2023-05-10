// p.382
#include <stdio.h>

int main(void)
{
    char Buffer[16] = { "Hello" };
    char *pData = Buffer;
    int Length = 0;

    while (*pData != '\0')
    {
        pData++;
    }

    printf("Length : %d\n", pData - Buffer);

    return 0;
}
