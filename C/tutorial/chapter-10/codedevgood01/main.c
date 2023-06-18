// p.355
#include <stdio.h>

void InitList(int *pList, int Size)
{
    int i = 0;
    for (i = 0; i < 5; ++i)
    {
        printf("정수를 입력하세요. : ");
        scanf("%d", &pList[i]);
    }
}

void SortList(int *pList, int Size)
{
    int i = 0, j = 0, tmp = 0;

    for (i = 0; i < Size - 1; ++i)
        for (j = i + 1; j < Size; ++j)
            if (pList[j] < pList[i])
            {
                tmp = pList[j];
                pList[j] = pList[i];
                pList[i] = tmp;
            }
}

void PrintList(int *pList, int Size)
{
    int i = 0;
    for (i = 0; i < Size; ++i)
        printf("%d\t", pList[i]);
    putchar('\n');
}

int main()
{
    int List[5] = { 0 };

    InitList(List, 5);
    SortList(List, 5);
    PrintList(List, 5);

    return 0;
}  
