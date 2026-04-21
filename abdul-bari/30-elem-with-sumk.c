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

void PairWithSumK(struct Array *arr, int k) {

    for (int i = 0; i < arr->length - 1; i++) {

        for (int j = i + 1; j < arr->length; j++) {
            if (arr->A[i] + arr->A[j] == k) {
                    printf("Pair is : %d and %d, with index %d \n", arr->A[i], arr->A[j], j);
            }
        }
    }

    printf("No duplicates");

}

int main() {
    struct Array arr1 = {{3, 5, 4, 6, 8, 1, 10, 7, 2}, 20, 9};

    PairWithSumK(&arr1, 5);
    DisplayNum(arr1);

    return 0;
}