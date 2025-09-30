#include <stdio.h>

int main()
{
    int x = 5;
    int *p = &x;
    *p = 6;        // modifies x through pointer

    int **q = &p;  // pointer to pointer
    int ***r = &q; // pointer to pointer to pointer

    printf("%d\n", *p);        // 6
    printf("%d\n", *q);        // address of x (value of p)
    printf("%d\n", **q);     // 6
    printf("%d\n", **r);     // address of x (value of p)
    printf("%d\n", ***r);  // 6

    return 0;
}