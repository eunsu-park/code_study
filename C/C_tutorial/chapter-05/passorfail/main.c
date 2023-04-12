// p.177
#include <stdio.h>

int main()
{
    int Height = 0;

    printf("키를 입력하세요. : ");
    scanf("%d", &Height);
    printf("결과: %s\n", Height >= 150? "합격" : "불합격");

    return 0;
}