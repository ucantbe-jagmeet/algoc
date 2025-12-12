#include <stdio.h>
#include <math.h>

int add(int x , int y); // function prototype 
int sub(int x , int y); // function prototype 

// fun prototype -> PRovide the compiler with information about a fuction's: name, return type and 
                    // parameters befeore its actual definition. Enables type checking and allows functions to be 
                    // usef before they are defined. 
// It improves readability , organization and helps prevent errors.


int main() {
    int result = add(3,4);
    int result2 = sub(10,4);

    printf("%d\n", result);
    printf("%d", result2);
    return 0;
}

int add(int x , int y) {
    int result = x + y;
    return result;
}

int sub(int x , int y) {
    int result2 = x - y;
    return result2;
}