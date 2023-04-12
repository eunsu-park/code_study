// p.152
#include <stdio.h>

int main()
{
    int Data = 10;

    printf("%d, %d, %d\n", sizeof(5), sizeof(Data), sizeof(int));
    printf("%d, %d\n", sizeof('A'), sizeof(char));
    printf("%d, %d\n", sizeof(123.456F), sizeof(123.45));

    printf("%d, %d\n", sizeof(Data+10), sizeof(++Data));
    printf("%d\n", Data);

    return 0;
}