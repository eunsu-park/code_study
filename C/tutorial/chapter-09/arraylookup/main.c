// p.315
#include <stdio.h>

int main()
{
    double Rate[10] = {
        0.0, 0.1, 0.25,
        0.5, 0.5,
        0.6, 0.65,
        0.8, 0.82, 0.97
    };
    int Age = 0, i = 0, Fee = 1000;

    printf("요금표\n");
    for (i = 1; i <= 10; ++i)
        printf("%d세 요금 : \t%d원\n", i, (int)(Fee * Rate[i-1]));
    putchar('\n');

    printf("나이를 입력하세요. : ");
    scanf("%d", &Age);
    if (Age < 1) Age = 1;
    else if (Age > 10) Age = 10;
    
    printf("최종요금 : %d원\n", (int)(Fee * Rate[Age - 1]));
    putchar('\n');

    return 0;
}