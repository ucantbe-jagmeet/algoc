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

void FindMissing(struct Array *arr) {
    int diff = arr->A[0] - 0;

    printf("Missing elements is: ");
    for (int i = 0; i < arr->length; i++) {
        while (arr->A[i] - i > diff) {
            printf("%d ", i + diff);
            diff++;
        }
    }
    printf("\n");
}

int main() {
    struct Array arr1 = {{1, 2, 4, 5, 6}, 20, 5};

    FindMissing(&arr1);
    DisplayNum(arr1);

    return 0;
}