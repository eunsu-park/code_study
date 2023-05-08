// p.338
#include <stdio.h>

int GetFactorial(int Param)
{
    int Result = 1, i = 0;

    if (Param < 1 || Param > 10) return 0;

    for (i = 1; i <= Param; ++i)
        Result *= i;

    return Result;
}

int main()
{
    int Result = 0, Input = 0;

    printf("계승을 구할 정수(1~10)를 입력하세요. : ");
    scanf("%d", &Input);

    Result = GetFactorial(Input);
    if (Result == 0)
    {
        puts("Error: 1~10 사이의 정수를 입력하세요.");
        return 0;
    }

    printf("Result: %d\n", Result);

    return 0;
}  