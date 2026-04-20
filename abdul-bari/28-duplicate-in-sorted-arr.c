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

void DuplicateInSortedArr(struct Array *arr) {
    printf("Duplicate elements are: ");

    for (int i = 0; i < arr->length - 1; i++) {
        if (arr->A[i] == arr->A[i + 1]) {
            printf("%d ", arr->A[i]);

            while (i < arr->length - 1 && arr->A[i] == arr->A[i + 1]) {
                i++;
            }
        }
    }
    printf("\n");
}

int main() {
    struct Array arr1 = {{1, 2, 2, 3, 4, 4, 4, 5, 6}, 20, 9};

    DuplicateInSortedArr(&arr1);
    DisplayNum(arr1);

    return 0;
}