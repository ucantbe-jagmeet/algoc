#include <stdio.h>

void makeDouble(int* A,int size){
    for (int i =0 ; i < size; i++){
        A[i] = 2 * A[i];
    }
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    makeDouble(A, size);
    
    for (int i =0 ; i < size; i++){
        printf("%d ", A[i]);
    }
    return 0;
}