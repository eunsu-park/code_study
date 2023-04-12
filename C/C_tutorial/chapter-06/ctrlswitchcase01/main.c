// p.206
#include <stdio.h>

int main()
{
    char Operator = 0;
    int x = 0, y = 0, Result = 0;

    scanf("%d%c%d", &x, &Operator, &y);

    switch (Operator)
    {
        case '+':
            Result = x + y;
            break;
        case '-':
            Result = x - y;
            break;
        case '*':
            Result = x * y;
            break;
        case '/':
            Result = x / y;
            break;
        default:
            puts("Error: 알 수 없는 산술 연산입니다.");
    }

    printf("Result: %d\n", Result);
    
    return 0;
}