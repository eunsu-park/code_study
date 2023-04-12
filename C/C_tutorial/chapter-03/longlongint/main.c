// p.78
#include <stdio.h>

int main()
{
    long long int lli = 4294967295LL;

    printf("%d\n", lli);
    printf("%u\n", lli);

    printf("%u\n", lli+1);
    printf("%u\n", lli+2);
    printf("%u\n", lli+3);

    printf("%lld\n", lli+1);
    printf("%lld\n", lli+2);
    printf("%lld\n", lli+3);

    return 0;
}