// p.126
#include <stdio.h>

int main()
{
    int Result = 0, Data = 10;

    Result += 3;
    printf("%d\n", Result);

    Result *= Data;
    printf("%d\n", Result);

    Result /= 2;
    printf("%d\n", Result);

    Result -= Data - 5;
    printf("%d\n", Result);

    Result %= 3;
    printf("%d\n", Result);

    return 0;
}