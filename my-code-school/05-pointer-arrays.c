#include <stdio.h>

int main()
{
    int A[] = {2, 4, 5, 8, 1};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Address = %p\n", (void*)&A[i]);   // address of A[i]
        printf("Address = %p\n", (void*)(A + i)); // pointer arithmetic
        printf("Value   = %d\n", A[i]);           // array element
        printf("Value   = %d\n", *(A + i));       // dereferencing pointer
    }

    return 0;
}