#include <stdio.h>

void birthday(int* age);

int main() {

    // pointer = A variable that stores the mempry address of another variable .
    //         benefit : They help avoid wasting memory by allowing you to pass the address of
    //         the large data strucutre instead of copying the entire data

    int age = 25;
    // printf("%p", &age);

    int *pAge = &age;
    // printf("%p\n", &age);
    // printf("%p", pAge);

    birthday(pAge);
    birthday(pAge);
    birthday(pAge);
    birthday(pAge);
    printf("%d", age);

    return 0;
}

void birthday(int* age){
    (*age)++;
}