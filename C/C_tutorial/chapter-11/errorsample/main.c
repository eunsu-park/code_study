// p.431
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Buffer[12] = {"HelloWorld"};
    char *pData = NULL;

    pData = (char*)malloc(sizeof(char) * 12);
    // pData = Buffer;
    strcpy(pData, Buffer);

    puts(pData);
    free(pData);

    return 0;
}
