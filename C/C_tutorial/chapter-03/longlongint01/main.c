// p.78
#include <stdio.h>

int main()
{
    long long int LLI = 4294967295LL;

    printf("%d\n", LLI);
    printf("%u\n", LLI);

    printf("%u\n", LLI+1);
    printf("%u\n", LLI+2);
    printf("%u\n", LLI+3);

    printf("%lld\n", LLI+1);
    printf("%lld\n", LLI+2);
    printf("%lld\n", LLI+3);

    return 0;
}