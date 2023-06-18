// p.277
#include <stdio.h>

int main()
{
    char Buffer[32] = {0};
    int Length = 0;

    printf("Input your name : ");
    gets(Buffer);

    while (Buffer[Length] != 0)
        Length++;

    printf("Your name is %s(%d).\n", Buffer, Length);

    return 0;
}