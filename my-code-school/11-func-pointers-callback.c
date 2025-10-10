#include <stdio.h>

void A() {
    printf("Hello!");
}

void B(void (*ptr)()) { // function takes a function pointer as an argument
    ptr(); // call back function that "ptr" points to
}

int main() {
    B(A); //   A is passed as a callback function to B
    return 0;
}