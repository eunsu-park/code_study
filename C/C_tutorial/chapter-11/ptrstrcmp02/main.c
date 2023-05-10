// p.400
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Buffer[12] = { "TestString" };
    char *pData = "TestString";

    printf("%d\n", strcmp(Buffer, pData));
    printf("%d\n", strcmp("TestString", pData));
    printf("%d\n", strcmp("DataString", pData));

    return 0;
}
