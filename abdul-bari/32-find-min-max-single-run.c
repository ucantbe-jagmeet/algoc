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

void FindMinMaxInSingleRun(struct Array *arr) {
    int min = arr->A[0];
    int max = arr->A[0];

    for (int i = 1; i < arr->length; i++) {
        if (arr->A[i] < min)
            min = arr->A[i];
        else if (arr->A[i] > max)
            max = arr->A[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}

int main() {
    struct Array arr1 = {{3, 5, 4, 6, -8, 1, 88, 7, 2}, 20, 9};

    FindMinMaxInSingleRun(&arr1);
    DisplayNum(arr1);

    return 0;
}