// p.361
#include <stdio.h>

int GetData(void)
{
    int Input = 0;
    printf("정수를 입력하세요. : ");
    scanf("%d", &Input);

    return Input;
}

int GetMax(int a, int b, int c)
{
    int Max = a;
    if (b > Max) Max = b;
    if (c > Max) Max = c;

    return Max;
}

void PrintData(int a, int b, int c, int Max)
{
    printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.", a, b, c, Max);
}

int main(void)
{
    int List[3] = { 0 };
    int Max = -9999, i = 0;

    for (i = 0; i < 3; ++i)
        List[i] = GetData();

    Max = GetMax(List[0], List[1], List[2]);
    PrintData(List[0], List[1], List[2], Max);

    return 0;
}