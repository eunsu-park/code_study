// p.408
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *pBuffer = NULL, *pNewBuffer = NULL;

    pBuffer = (char*)malloc(12);
    sprintf(pBuffer, "%s", "TestString");
    // printf("[%p] %d %s\n", pBuffer, _msize(pBuffer), pBuffer);
    printf("[%p] %d %s\n", pBuffer, malloc_usable_size(pBuffer), pBuffer);

    pNewBuffer = (char*)realloc(pBuffer, 32);
    sprintf(pNewBuffer, "%s", "TestStringData");
    // printf("[%p] %d %s\n", pNewBuffer, _msize(pNewBuffer), pNewBuffer);
    printf("[%p] %d %s\n", pNewBuffer, malloc_usable_size(pNewBuffer), pNewBuffer);

    free(pNewBuffer);

    return 0;
}
