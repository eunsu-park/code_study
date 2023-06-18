// p.97
#include <stdio.h>

int main()
{
    char Name[32] = {0};
    int Age;

    printf("나이를 입력하세요. :");
    scanf("%d", &Age);

    printf("이름을 입력하세요. :");
    gets(Name);

    printf("%d, %s\n", Age, Name);
    
    return 0;
}