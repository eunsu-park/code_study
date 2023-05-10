// p.435
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Buffer[32] = {"You are a girl."};
    char *pData = Buffer + 4;

    printf("%c\n", Buffer[0]);
    printf("%c\n", pData[0]);
    printf("%c\n", pData[6]);

    printf("%s\n", Buffer + 4);
    printf("%s\n", pData);
    printf("%s\n", pData + 4);

    return 0;
}
