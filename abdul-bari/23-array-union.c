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
void Union(struct Array *arr1, struct Array *arr2, struct Array *arr3){
    int k = 0;

    for (int i = 0; i < arr1->length; i++) {
        arr3->A[k++] = arr1->A[i];
    }

    for (int j = 0; j < arr2->length; j++) {
        int found = 0;

        for (int i = 0; i < arr1->length; i++) {
            if (arr2->A[j] == arr1->A[i]) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            arr3->A[k++] = arr2->A[j];
        }
    }

    arr3->length = k;
}

int main() {
    struct Array arr1 = {{2, 6, 10, 17, 19}, 20, 5};
    struct Array arr2 = {{1, 6, 8, 17, 20}, 20, 5};
    struct Array arr3 = {{}, arr1.size + arr2.size, 0};

    Union(&arr1, &arr2, &arr3);
    DisplayNum(arr3);

    return 0;
}