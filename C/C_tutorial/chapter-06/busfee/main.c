// p.217
#include <stdio.h>

int main()
{
    int Age = 0, Fee = 1000;

    printf("나이를 입력하세요. : ");
    scanf("%d", &Age);

    if (Age < 20)
        Fee = Fee * 75 / 100;

    printf("최종요금 : %d\n", Fee);

    return 0;
}