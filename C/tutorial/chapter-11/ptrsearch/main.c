// p.402
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Buffer[32] = { "I am a boy." };
    printf("%p\n", Buffer);
    printf("%p\n", strstr(Buffer, "am"));
    printf("%p\n", strstr(Buffer, "boy"));

    printf("Index : %d\n", strstr(Buffer, "am") - Buffer);
    printf("Index : %d\n", strstr(Buffer, "boy") - Buffer);

    return 0;
}
