#include <stdio.h>

int main() {
    int B[2][3] = {{1,2,3}, {4,5,6}};

    printf("%p one   (B) \n",   (void*)B);
    printf("%p two   (B[0]) \n", (void*)B[0]);
    printf("%p three (*B) \n",  (void*)*B);
    printf("%p four  (&B[0][0]) \n", (void*)&B[0][0]);
    printf("%p five  (B[0]) \n", (void*)B[0]);

    printf("%p six   (B+1) \n", (void*)(B+1));
    printf("%p seven (&B[1]) \n", (void*)&B[1]);
    printf("%p eight (*(B+1)) \n", (void*)*(B+1));
    printf("%p nine  (B[1]) \n", (void*)B[1]);
    printf("%p ten   (&B[1][0]) \n", (void*)&B[1][0]);

    printf("%p eleven (*(B+1)+2) \n", (void*)(*(B+1)+2));
    printf("%p twelve (B[1]+2) \n", (void*)(B[1]+2));
    printf("%p thirteen (&B[1][2]) \n", (void*)&B[1][2]);

    // Also print values
    printf("%d value check (*(*B+1)) = B[0][1]\n", *(*B+1));
    printf("%d value check (*(*(B+1)+2)) = B[1][2]\n", *(*(B+1)+2));

    return 0;
}