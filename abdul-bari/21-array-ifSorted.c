#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[20];
    int size;
    int length;
};

void DisplayNum(struct Array arr) {
    printf("\nElements are: ");
    for (int i = 0; i < arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
}

void Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void checkSorted(struct Array *arr){
    for(int i=0; i < arr->length - 1; i++){
        if(arr->A[i] > arr->A[i+1]){
            printf("Array is not sorted");
            return;
        }
    }
    printf("Array is sorted");
}


int main() {
    struct Array arr = {{1, 4, 651, 60 ,75, 89, 100}, 20, 7};
    // int index = BinarySearch(arr, 45);
    // int index = RBinSearch(arr.A , 0, arr.length, 48);
    // printf("\nindex is: %d\n", index);
    checkSorted(&arr);
    DisplayNum(arr);

    return 0;
}