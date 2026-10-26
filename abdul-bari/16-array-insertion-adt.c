#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[10];
    int size;
    int length;
};

void DisplayNum(struct Array arr){
    printf("\nElements are: ");
    for (int i = 0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    }
};
void Append(struct Array *arr, int x){
    if( arr-> length < arr-> size){
        arr->A[arr->length++] = x;
    }
};


int main() {
    struct Array arr = { {1, 2, 3, 4, 5 }, 10, 5 };
    Append(&arr, 1000);

    DisplayNum(arr);

    return 0;
}