// p.96
#include <stdio.h>

int main()
{
    char BufferLeft[32] = {0};
    char BufferRight[32] = {0};

    scanf("%s%s", BufferLeft, BufferRight);
    printf("%s %s\n", BufferLeft, BufferRight);

    return 0;
}