// p.418
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int i = 0;
    for (i = 0; i < argc; ++i)
        puts( argv[i] );
    puts("End");

    return 0;
}
