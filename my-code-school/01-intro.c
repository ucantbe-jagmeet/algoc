#include <stdio.h>

int main() {
    int a;
    int *p;
    a = 10;
    p = &a;
    // printf("%d", p); // address
    // printf("%d", *p); // value at address is poointed at
    // printf("%d", &a); // address
    printf("%d", a); // 10
    *p =12;
    printf("%d", a); // 12 ( dereferencing)

    return 0;
}