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
void Append(struct Array *arr, int x){
    if( arr-> length < arr-> size){
        arr->A[arr->length++] = x;
    }
};
void Insert(struct Array *arr, int index, int x){
    if( index >=0 && index <= arr->length){
        
        for ( int i = arr-> length; i >= index ; i --){
            if(i == index){
                arr->A[i] = x;
                arr->length++;
            } else {
                arr->A[i] = arr->A[i-1];
            }
        }
    }
};

int main() {
    struct Array arr = { {1, 2, 3, 4, 5 }, 10, 5 };
    Append(&arr, 1000);
    Insert(&arr, 3, 999);
    DisplayNum(arr);

    return 0;
}