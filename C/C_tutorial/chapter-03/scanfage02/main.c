// p.99
#include <stdio.h>

int main()
{
    char Name[32] = {0};
    int Age;

    // printf("나이를 입력하세요. :"); // Windows Solution
    // scanf_s("%d", &Age);

    // printf("이름을 입력하세요. :");
    // fflush(stdin);
    // gets_s(Name, siazeof(Name));

    printf("나이를 입력하세요. :"); // Linux Solution
    scanf("%d%*c", &Age);

    printf("이름을 입력하세요. :");
    gets(Name);
    

    printf("%d, %s\n", Age, Name);
    
    return 0;
}