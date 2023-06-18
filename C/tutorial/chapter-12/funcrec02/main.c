// p.474
#include <stdio.h>

int GetFactorial(int Param)
{
    int Result = 0;
    if (Param == 1) return 1;

    Result = Param * GetFactorial(Param - 1);
    return Result;
}


int main(void)
{
    printf("5! == %d\n", GetFactorial(5));
    return 0;
}  
