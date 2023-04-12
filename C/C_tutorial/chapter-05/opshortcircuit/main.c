// p.160
#include <stdio.h>

int main()
{
    int Age = 0, Height = 0;

    printf("나이를 입력하세요. : ");
    scanf("%d", &Age);
    printf("키를 입력하세요. : ");
    scanf("%d", &Height);

    printf("결과 : %d (1:합격, 0:불합격)\n",
        Age >= 20 && Age <= 30 && Height >=150
        );

    return 0;
}