#include <stdio.h>
#include <math.h>

int add(int x , int y) {
    int result = x + y;
    return result;
}

int sub(int x , int y) {
    int result2 = x - y;
    return result2;
}

int main() {
    int result = add(3,4);
    int result2 = sub(10,4);

    printf("%d\n", result);
    printf("%d", result2);
    return 0;
}
