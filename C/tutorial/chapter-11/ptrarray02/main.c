// p.404
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Buffer[32] = { "You are a girl." };

    printf("%c\n", Buffer[0]);
    printf("%c\n", *Buffer);
    printf("%c\n", *(Buffer + 0));
 
    printf("%c\n", Buffer[5]);
    printf("%c\n", *(Buffer + 5));

    printf("%s\n", &Buffer[4]);
    printf("%s\n", &*(Buffer + 4));
    printf("%s\n", Buffer + 4);

    return 0;
}
