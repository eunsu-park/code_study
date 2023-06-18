// p.145
#include <stdio.h>

int main()
{
    int a, b;
    printf("두 정수를 입력하세요. : ");
    scanf("%d%d", &a, &b);

    printf("AVG: %.2f\n", (a + b) / 2.0);
   
    return 0;
}