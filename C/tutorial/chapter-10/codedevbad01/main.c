// p.353
#include <stdio.h>

int List[5] = { 0 };

void InitList(void)
{
    int i = 0;
    for (i = 0; i < 5; ++i)
    {
        printf("정수를 입력하세요. : ");
        scanf("%d", &List[i]);
    }
}

void SortList(void)
{
    int i = 0, j = 0, tmp = 0;

    for (i = 0; i < 4; ++i)
        for (j = i + 1; j < 5; ++j)
            if (List[j] < List[i])
            {
                tmp = List[j];
                List[j] = List[i];
                List[i] = tmp;
            }
}

void PrintList(void)
{
    int i = 0;
    for (i = 0; i < 5; ++i)
        printf("%d\t", List[i]);
    putchar('\n');
}

int main()
{
    InitList();
    SortList();
    PrintList();

    return 0;
}  
