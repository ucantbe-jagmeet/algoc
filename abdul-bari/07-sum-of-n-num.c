#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    if( n == 0)
        return 0;
    return sum(n-1) + n;
}

int main() {
    int r = 10;
    r = sum(r);
    printf("%d", r);
    return 0;
}
