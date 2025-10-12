#include <stdio.h>
#include <stdlib.h>

void swap (int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a= 2 , b= 10;
    swap(&a, &b);
    printf("Numbers after swqpping are: %d and %d\n",a, b);
    return 0;
}