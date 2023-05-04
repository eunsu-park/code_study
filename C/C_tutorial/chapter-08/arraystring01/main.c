// p.275
#include <stdio.h>

int main()
{
    int List[5] = { 10, 20, 30, 40, 50};
    char Buffer[6] = { 'H', 'E', 'L', 'L', 'O', '\0' };
    char Data[8] = { "HELLO" };

    char *pBuffer = "HELLO";

    puts(Buffer);
    puts(Data);
    puts(pBuffer);
    
    return 0;
}