// p.351
#include <stdio.h>

int Counter = 0;

void InitCounter(int Data)
{
    Counter = Data;
}

void IncreaseCounter()
{
    Counter++;
}

int main()
{
    InitCounter(10);
    printf("%d\n", Counter);
    IncreaseCounter();
    printf("%d\n", Counter);
    IncreaseCounter();
    printf("%d\n", Counter);

    return 0;
}  
