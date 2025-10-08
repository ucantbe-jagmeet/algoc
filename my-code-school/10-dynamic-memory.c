#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the size of an Array: ");
    scanf("%d", &n);

    // malloc
    // int* arr = (int*)malloc(n * sizeof(int));

    // for(int i = 0; i < n; i++) {
    //     arr[i] = i + 1;
    // }

    // free(arr);
    // // arr[2] = 10;
    // arr = NULL; // After Free adjust pointer to NULL

    // for(int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }

    // calloc
    // int* arr = (int*)calloc(n , sizeof(int));

    // for(int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }

    // realloc
    int* arr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // int* arr2 = (int*)realloc(NULL , n*sizeof(int)); // behaves like malloc
    int* arr2 = (int*)realloc(arr , 2*n*sizeof(int));
    for(int i = 0; i < 2*n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}