// p.419
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char ch = 'A';
    char *pData = &ch;
    char* *ppData = &pData;
    char** *pppData = &ppData;

    printf("%c\n", ch);
    printf("%c\n", *pData);
    printf("%c\n", **ppData);
    printf("%c\n", ***pppData);

    return 0;
}
