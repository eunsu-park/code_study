// p.84
#include <stdio.h>

int main()
{
    double Data = 123.456;
    printf("%f, %f\n", Data, -123.456);

    printf("%.1f\n", Data);
    printf("%.2f\n", Data);
    printf("%.3f\n", Data);

    printf("%8d\n", 123);
    printf("%12.3f\n", Data);
    printf("%012.3f\n", Data);

    return 0;
}