#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[10];
    int size;
    int length;
};

void DisplayNum(struct Array arr){
    printf("\nElements are: ");
    for (int i = 0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    }
};

void Swap( int *x, int *y){

    int temp; 
    temp = *x;
    *x = *y;
    *y = temp;
}
int LinearSearch(struct Array *arr, int key){
    for(int i = 0; i <= arr->length; i++){
        if(key == arr->A[i]){
            Swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int main() {
    struct Array arr = { {1, 2, 3, 4, 5 }, 10, 5 };
    int index = LinearSearch(&arr, 2);
    printf("index is: %d", index);
    DisplayNum(arr);

    return 0;
}