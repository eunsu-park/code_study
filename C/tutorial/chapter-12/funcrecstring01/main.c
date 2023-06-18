// p.477
#include <stdio.h>

void PutData(char *pParam)
{
    if (*pParam == '\0')
        return;
    
    putchar(*pParam);
    PutData(pParam + 1);
}

int main(void)
{
    PutData("TestData");
    putchar('\n');
    return 0;
}  
