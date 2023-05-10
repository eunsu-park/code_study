// p.399
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Buffer[12] = { "TestString" };
    char *pData = "TestString";

    printf("%d\n", Buffer == pData);
    printf("%d\n", "TestString" == pData);
    printf("%d\n", "DataString" == pData);

    return 0;
}
