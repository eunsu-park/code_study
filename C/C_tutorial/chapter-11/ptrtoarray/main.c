// p.423
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char List[2][12] = { "Hello", "World" };
    // char* *pList = List;
    char (*pList)[12] = List;

    puts(pList[0]);
    puts(pList[1]);

    return 0;
}
