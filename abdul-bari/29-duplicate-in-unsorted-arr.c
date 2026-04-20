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
    printf("\n");
}

void DuplicateInUnSortedArr(struct Array *arr) {
    printf("Duplicate elements are: ");

    int found = 0;

    for (int i = 0; i < arr->length - 1; i++) {
        int alreadyPrinted = 0;

        for (int k = 0; k < i; k++) {
            if (arr->A[i] == arr->A[k]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted) {
            continue;
        }

        for (int j = i + 1; j < arr->length; j++) {
            if (arr->A[i] == arr->A[j]) {
                printf("%d ", arr->A[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No duplicates");
    }

    printf("\n");
}

int main() {
    struct Array arr1 = {{3, 5, 3, 2, 8, 5, 6, 8, 8}, 20, 9};

    DuplicateInUnSortedArr(&arr1);
    DisplayNum(arr1);

    return 0;
}