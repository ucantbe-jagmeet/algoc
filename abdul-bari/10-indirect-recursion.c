#include <stdio.h>
#include <stdlib.h>

void fun2(int n);

void fun1(int n){
 
    if( n > 0){
        printf("%d ", n);
        fun2(n-1);
    }
}
void fun2(int n){
 
    if( n > 1){
        printf("%d ", n);
        fun1(n/2);
    }
}

int main() {
    int n = 20;
    fun1(n);
    return 0;
}
