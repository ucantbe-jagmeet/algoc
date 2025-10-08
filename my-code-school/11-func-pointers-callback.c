#include <stdio.h>

void A() {
    printf("Hello!");
}

void B(void (*ptr)()) {
    ptr();
}

int main() {
    void (*p)() = A;
    B(p);
    return 0;
}