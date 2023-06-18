// p.421
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char* List[3] = { "Hello", "World", "String" };
    char* *pList = List;
    char** *ppList = &pList;

    puts(pList[0]);
    puts(pList[1]);
    puts(pList[2]);

    puts(*ppList[0]);
    puts(*(*(ppList + 0) + 1));

    return 0;
}
