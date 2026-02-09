#include <stdio.h>
#include <stdlib.h>

int x = 0;

int fun(int n){
 
    if( n > 0){
        printf("%d ", n);
        fun(n-1);
        fun(n-1);
    }
    return 0;
}

int main() {
    int n = 4;
    fun(n);
    return 0;
}
