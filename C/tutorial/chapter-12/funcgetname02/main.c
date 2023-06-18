// p.445
#include <stdio.h>
#include <stdlib.h>

char* GetName(void)
{
    char *pName = NULL;

    pName = (char*)calloc(32, sizeof(char));
    printf("이름을 입력하세요. : ");
    fgets(pName, sizeof(char)*32, stdin);
    // gets_s(pName, Size);

    return pName;
}

int main(void)
{
    char *pName = NULL;

    pName = GetName();
    printf("당신의 이름은 %s 입니다.\n", pName);

    free(pName);

    return 0;
}  
