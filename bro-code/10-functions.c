#include <stdio.h>

int add(int x , int y); // function prototype

int main() {
    int result = add(3,4);
    printf("%d", result);
    return 0;
}

int add(int x , int y) {
    int result = x + y;
    return result;
}