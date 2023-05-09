// p.357
#include <stdio.h>

int Input = 100;

void TestFunc(void)
{
    printf("TestFunc() : %d\n", Input);
}

int main(void)
{
    int Input = 0;
    printf("%d\n", Input);
    {
        int Input = 20;
        printf("%d\n", Input);
    }
    TestFunc();
    return 0;
}
