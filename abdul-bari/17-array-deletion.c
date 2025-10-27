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
void Delete(struct Array *arr, int index){
    if( index >=0 && index <= arr->length){
        for ( int i = index ; i < arr-> length  ; i ++ ){
            arr->A[i] = arr->A[i+1];
        }
        arr-> length--;
    }
};

int main() {
    struct Array arr = { {1, 2, 3, 4, 5 }, 10, 5 };
    Delete(&arr, 2);
    DisplayNum(arr);

    return 0;
}