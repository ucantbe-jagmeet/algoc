#include <stdio.h>

typedef struct {
    char model[25];
    int year;
    int price;
} Car;

typedef struct {
    char model[25];
    int year;
    int price;
} Bike;

int main() {
    Car cars[] = {
        {"Mustang", 2025, 32000},
        {"Corvette", 2026, 68000},
        {"Challenger", 2024, 29000}
    };

    Bike bikes[] = {
        {"Pulsar", 2022, 10000},
        {"Splenfor", 2012, 5000},
    };

    int size = sizeof(cars) / sizeof(cars[0]);
    int bikeSize = sizeof(bikes) / sizeof(bikes[0]);

    for (int i = 0; i < size; i++) {
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: $%d\n", cars[i].price);
    }

    for (int i = 0; i < bikeSize; i++) {
        printf("Model: %s\n", bikes[i].model);
        printf("Year: %d\n", bikes[i].year);
        printf("Price: $%d\n", bikes[i].price);
    }

    return 0;
}