#include <stdio.h>


int main() {

    int rows = 0;
    int cols = 0;
    printf("Enter Number of rows: ");
    scanf("%d", &rows);

    printf("Enter Number of cols: ");
    scanf("%d", &cols);


    int numbers[rows][cols]; 
    for( int i = 0; i < rows; i++){
        for( int j = 0 ; j < cols; j++){
            printf("Enter value for index %d%d :", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }

    printf("\nYour Array is ready with rows = %d and col = %d\n", rows, cols);

    for( int i = 0; i < rows; i++){
        for( int j = 0 ; j < cols; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}