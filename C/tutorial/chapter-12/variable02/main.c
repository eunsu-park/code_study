// p.470
#include <stdio.h>

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
