// p.483
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Path[128] = {"/Users/eunsu/Drives/Workspace/"};
    char Buffer[128] = { 0 };
    printf("Input Path: ");
    gets(Buffer);

    strcat(Path, Buffer);
    puts(Path);
    return 0;
}