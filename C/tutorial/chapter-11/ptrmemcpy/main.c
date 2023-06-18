// p.392
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Buffer[12] = { "HelloWorld" };
    char NewBuffer[12] = { 0 };

    memcpy(NewBuffer, Buffer, 4);
    puts(NewBuffer);

    memcpy(NewBuffer, Buffer, 6);
    puts(NewBuffer);

    memcpy(NewBuffer, Buffer, sizeof(Buffer));
    puts(NewBuffer);

    return 0;
}
