// p.444
#include <stdio.h>

void GetName(char *pName, int Size)
{
    printf("이름을 입력하세요. : ");
    fgets(pName, Size, stdin);
    // gets_s(pName, Size);
}

int main()
{
    char Name[32] = { 0 };

    GetName(Name, sizeof(Name));
    printf("당신의 이름은 %s 입니다.\n", Name);
    
    return 0;
}  
