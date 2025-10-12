#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};


int main(){

    struct Rectangle r = {10, 5};
    printf("len and breadth of rectangle is: %d and %d\n", r.length, r.breadth);
    
    return 0;
}