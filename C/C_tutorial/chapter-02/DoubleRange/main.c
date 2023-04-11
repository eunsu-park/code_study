// p.50
#include <stdio.h>
#include <float.h>

int main()
{
    double D = 123.456;

    printf("%f\n", D);
    printf("%E - %E\n", DBL_MIN, DBL_MAX);

    return 0;
}