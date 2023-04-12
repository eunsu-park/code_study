// p.183
#include <stdio.h>

int main()
{
    int Age = 0;
    
    printf("나이를 입력하세요. : ");
    scanf("%d", &Age);

    if (Age >= 20)
        printf("당신의 나이는 %d세 입니다.\n", Age);

    puts("End");

    return 0;
}