#include <stdio.h>

void Increment(int *p)
{
    *p = (*p) + 1;   // increase the value at the address
}

int main()
{
    int a;
    a = 10;

    Increment(&a);   // pass address of 'a'
    printf("a = %d", a);

    return 0;
}