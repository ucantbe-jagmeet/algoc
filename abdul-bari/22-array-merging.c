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
void mergingArr(struct Array *arr1, struct Array *arr2, struct Array *arr3){
    int i = 0, j = 0, k = 0;

    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } else {
            arr3->A[k++] = arr2->A[j++];
        }
    }

    while (i < arr1->length) {
        arr3->A[k++] = arr1->A[i++];
    }

    while (j < arr2->length) {
        arr3->A[k++] = arr2->A[j++];
    }

    arr3->length = k;
}

int main() {
    struct Array arr1 = {{1, 3, 5, 7, 9}, 20, 5};
    struct Array arr2 = {{2, 4, 6, 8, 10}, 20, 5};
    struct Array arr3 = {{}, arr1.size + arr2.size, 0};

    mergingArr(&arr1, &arr2, &arr3);
    DisplayNum(arr3);

    return 0;
}