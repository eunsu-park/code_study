// p.387
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int *pList = NULL, *pNewList = NULL;
    int List[3] = { 0 };

    pList = (int*)malloc(sizeof(int) * 3);
    memset(pList, 0, sizeof(int) * 3);

    pNewList = (int*)calloc(3, sizeof(int));

    free(pList);
    free(pNewList);

    return 0;
}
