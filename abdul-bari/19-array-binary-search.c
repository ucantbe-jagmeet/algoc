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
int RBinSearch(int a[], int l, int h, int key) {
    int mid;

    if( l <= h){
        mid = l + (h - l) / 2;

        if (key == a[mid]) {
            return mid;
        } else if (key < a[mid]) {
            return RBinSearch(a, l, mid -1, key);
        } else {
            return RBinSearch(a, mid + 1, h, key);
        }
    }
    return -1;
}

int main() {
    struct Array arr = {{1, 2, 13 , 17, 23, 41, 45, 48, 51, 55,  64, 75}, 20, 12};
    // int index = BinarySearch(arr, 45);
    int index = RBinSearch(arr.A , 0, arr.length, 48);
    printf("\nindex is: %d\n", index);
    DisplayNum(arr);

    return 0;
}