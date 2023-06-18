// p.336
#include <stdio.h>

int GetFactorial(int Param)
{
    int Result = 1, i = 0;
    if (Param < 1 || Param > 10)
    {
        puts("Error: 1~10 사이의 정수를 입력하세요.");

        return 0;
    }

    for (i = 1; i <= Param; ++i)
        Result *= i;

    return Result;
}

int main()
{
    printf("Max: %d\n", GetFactorial(1));
    printf("Max: %d\n", GetFactorial(5));
    printf("Max: %d\n", GetFactorial(11));
    printf("Max: %d\n", GetFactorial(10));

    return 0;
}  