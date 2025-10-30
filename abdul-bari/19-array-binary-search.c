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

int BinarySearch(struct Array arr, int key) {
    int l = 0, h = arr.length - 1, mid;

    while (l <= h) {
        mid = l + (h - l) / 2;

        if (key == arr.A[mid]) {
            return mid;
        } else if (key < arr.A[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int main() {
    struct Array arr = {{1, 2, 13 , 17, 23, 41, 45, 48, 51, 55,  64, 75, 86}, 20, 13};
    int index = BinarySearch(arr, 45);
    printf("index is: %d", index);
    DisplayNum(arr);

    return 0;
}