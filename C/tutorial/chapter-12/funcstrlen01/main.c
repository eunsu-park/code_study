// p.450
#include <stdio.h>

int GetLength(const char *pParam)
{
    int Length = 0;
    while (pParam[Length] != '\0')
        Length++;

    return Length;
}

int main(void)
{
    char *pData = "Hello";

    printf("%d\n", GetLength("Hi"));
    printf("%d\n", GetLength(pData));

    return 0;
}  
