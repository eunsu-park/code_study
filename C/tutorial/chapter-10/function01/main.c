// p.330
#include <stdio.h>

int Add(int a, int b)
{
    int Data = 0;
    Data = a + b;

    return Data;
}

int main()
{
    int Result = 0;

    Result = Add(3, 4);
    printf("Result: %d\n", Result);

    return 0;
}  