// p.414
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *List[3] = { "Hello", "World", "String" };
    printf("%s\n", List[0]);
    printf("%s\n", List[1]);
    printf("%s\n", List[2]);

    printf("%s\n", List[0] + 1);
    printf("%s\n", List[1] + 2);
    printf("%s\n", List[2] + 3);

    printf("%c\n", List[0][3]);
    printf("%c\n", List[1][3]);
    printf("%c\n", List[2][3]);

    return 0;
}
