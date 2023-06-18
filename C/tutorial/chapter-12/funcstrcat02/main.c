// p.485
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char Path[128] = {"/Users/eunsu/Drives/Workspace/"};

    strcat(Path, "code_study/");
    strcat(Path, "C/");
    puts(Path);

    strcpy(Path, "/Users/eunsu/Drives/Workspace/");
    strcat(Path + strlen("/Users/eunsu/Drives/Workspace/"), "code_study/");
    strcat(Path + strlen("/Users/eunsu/Drives/Workspace/code_study/"), "C/");
    puts(Path);
    return 0;
}