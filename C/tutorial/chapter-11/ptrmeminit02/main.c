// p.389
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Buffer[] = { "Hello" };
    char *pBuffer = "Hello";
    char *pData = NULL;

    pData = (char*)malloc(sizeof(char) * 6);
    pData[0] = 'H';
    pData[1] = 'e';
    pData[2] = 'l';
    pData[3] = 'l';
    pData[4] = 'o';
    pData[5] = '\0';

    puts(Buffer);
    puts(pBuffer);
    puts(pData);

    free(pData);

    return 0;
}
