// p.426
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int TestFunc(void)
{
    static int Data = 10;
    ++Data;

    return Data;
}


int main(void)
{
    printf("%d\n", TestFunc());
    printf("%d\n", TestFunc());
    printf("%d\n", TestFunc());

    return 0;
}
