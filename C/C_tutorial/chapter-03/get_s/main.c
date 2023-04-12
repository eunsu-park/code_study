// p.69
#include <stdio.h>

int main()
{
    char Name[32] = {0};
    
    printf("이름을 입력하세요: ");
    fgets(Name, sizeof(Name), stdin); //Linux, Unix
    // gets_s(Name); //Windows?

    printf("당신의 이름은 ");
    puts(Name);
    puts("입니다.");

    return 0;
}