#include <stdio.h>

int Add( int a, int b ) {
    return a + b;
}

void Print( char* name ) {
    printf("Hello, %s\n", name);
}

int main() {
    int c;
    int (*p)(int, int);
    p = Add; // function name will return us pointer
    c = p(4, 5); // dereferencing and execution function pointer
    printf("The sum is: %d\n", c);


    void (*str)(char*);
    str = Print;
    str("John Doe");

    return 0;
}