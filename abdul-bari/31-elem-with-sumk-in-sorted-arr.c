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

void PairWithSumKInSortedArr(struct Array *arr, int k) {
    int i = 0;
    int j = arr->length - 1;
    int found = 0;

    while (i < j) {
        if (arr->A[i] + arr->A[j] == k) {
            printf("Pair is: %d and %d\n", arr->A[i], arr->A[j]);
            found = 1;
            i++;
            j--;
        }
        else if (arr->A[i] + arr->A[j] < k) {
            i++;
        }
        else {
            j--;
        }
    }

    if (!found) {
        printf("No pair found\n");
    }
}

int main() {
    struct Array arr1 = {{1, 2, 3, 4, 5, 6, 7, 8, 10}, 20, 9};

    PairWithSumKInSortedArr(&arr1, 5);
    DisplayNum(arr1);

    return 0;
}