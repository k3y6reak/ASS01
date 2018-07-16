#include <stdio.h>
#include <stdlib.h>

int foo(int a1)
{
    if(a1 < 0)
    {
        exit(0);
    }

    if(a1 == 1 || a1 == 2)
    {
        return 1;
    }
    else
    {
        return foo(a1-1) + foo(a1-2);
    }

}


int main(void)
{
    printf("%d\n", foo(0xa));

    return 0;
}