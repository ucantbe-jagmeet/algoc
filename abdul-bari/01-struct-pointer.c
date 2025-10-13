#include <stdio.h>
#include <stdlib.h>
struct Rectangle {
    int length;
    int breadth;
};


int main(){

    struct Rectangle* p = (struct rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 20;
    p->breadth = 19;

    printf("len and breadth of rectangle is: %d and %d\n", p->length, p->breadth);
    free(p);
    return 0;
}