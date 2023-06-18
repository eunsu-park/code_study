// p.50
#include <stdio.h>
#include <float.h>

int main()
{
    double Data = 123.456;

    printf("%f\n", Data);
    printf("%E - %E\n", DBL_MIN, DBL_MAX);

    return 0;
}