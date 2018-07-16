#include <stdio.h>

int foo(int a1, int a2, int a3)
{
    int v4 = 0;

    v4 = a1 + a2;
    return v4 + a3;
}


int main(void)
{
    int v1 = 0;
    int buf[256] = {0};


    foo(0x1, 0x2, 0xa);
    
    printf("%d", foo(0x5, 0x1, 0x2));

    return 0;
}