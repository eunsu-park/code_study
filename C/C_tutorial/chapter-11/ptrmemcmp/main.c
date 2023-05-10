// p.396
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Buffer[12] = { "TestString" };
    char *pData = "TestString";

    printf("%d\n", memcmp(Buffer, pData, 10));
    printf("%d\n", memcmp("teststring", pData, 10));
    printf("%d\n", memcmp("DataString", pData, 10));

    return 0;
}
