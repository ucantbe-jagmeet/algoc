#include <stdio.h>

int compare(int a, int b) {
    if( a > b ) return 1;
    else return -1;
}

void BubbleSort(int Arr[], int size,int (*compare)(int, int)) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (compare(Arr[j], Arr[j + 1]) > 0) {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    // int i, Arr[5] = {64, 34, 25, 12, 22};
    int i, Arr[5] = {-64, 34, 25, -12, 22};
    BubbleSort(Arr, 5, compare);
    for(int i = 0; i < 5; i++) printf("%d ", Arr[i]);
    return 0;
}