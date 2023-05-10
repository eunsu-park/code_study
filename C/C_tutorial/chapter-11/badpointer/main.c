// p.410
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *pBuffer = NULL;

    pBuffer = (char*)malloc(12);
    gets(pBuffer);
    puts(pBuffer);

    return 0;
}
