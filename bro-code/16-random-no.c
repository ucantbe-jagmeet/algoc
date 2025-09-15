#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // printf("%d", rand());

    srand(time(NULL));
    printf("%d\n", rand());
    
    srand(time(NULL));
    int random = (rand() % 10) + 1;

    printf("random %ld", random);
    
    return 0;
}