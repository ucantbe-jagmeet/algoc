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


void reverseArr(struct Array *arr){
    int i = 0, j = arr->length -1;
    while(i<=j){
        Swap(&arr->A[i], &arr->A[j]);
        i++;
        j--;
    }
}


int main() {
    struct Array arr = {{1, 100, 77, 100, 54, 100, 164, 75, 89}, 20, 9};
    // int index = BinarySearch(arr, 45);
    // int index = RBinSearch(arr.A , 0, arr.length, 48);
    // printf("\nindex is: %d\n", index);
    reverseArr(&arr);
    DisplayNum(arr);

    return 0;
}