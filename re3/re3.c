#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int v4 = 0;
    int v8 = 0;


    if (argc == 0x2)
    {
        exit(0);
    }


    for(v4=1; v4<=9; v4++)
    {
        for(v8=1; v8<=9; v8++)
        {
            printf("%d\n", v4*v8);
        }

    }


    return 0;
}