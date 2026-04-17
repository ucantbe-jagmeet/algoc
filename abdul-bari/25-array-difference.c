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
void Difference(struct Array *arr1, struct Array *arr2, struct Array *arr3){
    int i = 0, j = 0, k = 0;

    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } 
        else if (arr1->A[i] > arr2->A[j]) {
            j++;
        } 
        else {
            i++;
            j++;
        }
    }

    while (i < arr1->length) {
        arr3->A[k++] = arr1->A[i++];
    }

    arr3->length = k;
}

int main() {
    struct Array arr2 = {{2, 6, 10, 17, 19}, 20, 5};
    struct Array arr1 = {{1, 6, 8, 17, 20}, 20, 5};
    struct Array arr3 = {{}, arr1.size + arr2.size, 0};

    Difference(&arr1, &arr2, &arr3);
    DisplayNum(arr3);

    return 0;
}