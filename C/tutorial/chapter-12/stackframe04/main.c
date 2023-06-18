// p.461
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int Data = 10;
    char *pBuffer = NULL;

    pBuffer = (char*)malloc( 12 );
    strcpy(pBuffer, "Hello");
    free(pBuffer);

    return 0;
}  
