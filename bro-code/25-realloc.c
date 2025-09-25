#include <stdio.h>
#include <stdlib.h>

int main() {

    // realloc() = Reallocation. Resize perviously allocated memory. realloc(ptr, bytes)
    int number = 0;

    printf(" Enter the prices of grades: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));
    // int size = sizeof(grades) / sizeof(grades[0]);

    if(prices == NULL) {
        printf("Memory allocations failed");
        return 1;
    }

    for (int i = 0; i < number; i++){
        printf("Enter prices #%d", i + 1);
        scanf(" %f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices,newNumber * sizeof(float));

    if(temp == NULL) {
        printf("couldnt read reallocate Memory");
    }
    else {
        prices = temp;
        temp = NULL;

        for (int i = number; i < newNumber; i++){
            printf("Enter prices #%d", i + 1);
            scanf(" %f", &prices[i]);
        }
        for (int i = 0; i < newNumber; i++){
            printf("%f ", &prices[i]);
        }
    }

    free(prices); // returning 'rented' space back to the operating sysytem
    prices = NULL; // avoids dangling pointers

    return 0;
}