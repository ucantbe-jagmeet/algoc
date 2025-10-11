#include <stdio.h>

void BubbleSort(int Arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (Arr[j] > Arr[j + 1]) {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int i, Arr[5] = {64, 34, 25, 12, 22};
    BubbleSort(Arr, 5);
    for(int i = 0; i < 5; i++) printf("%d ", Arr[i]);
    return 0;
}