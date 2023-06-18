// p.379
#include <stdio.h>
#include <string.h>

int main(void)
{
    char Buffer[16] = { "Hello" };
    char *pData = Buffer;
    int Length = 0;

    while (*pData != '\0')
    {
        pData++;
        Length++;
    }

    printf("Length : %d\n", Length);
    printf("Length : %d\n", strlen(Buffer));
    printf("Length : %d\n", strlen("World"));

    return 0;
}
