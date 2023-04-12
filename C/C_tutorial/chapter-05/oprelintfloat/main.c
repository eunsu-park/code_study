// p.153
#include <stdio.h>

int main()
{
    printf("%d\n", 300 == 299.99999F);
    printf("%d\n", 300 == 299.99999);

    printf("%d\n", 300 == 299.9999F);
    printf("%d\n", 300 == 300.00001F);

    return 0;
}