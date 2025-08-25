#include <stdio.h>
#include <stdbool.h>

int main(){
    // variable = A reusable container for a value, behaves as if it were the value it contains.
    /*
        int = whole numbers (4 bytes in modern systems)
        float = single-precision decimal number (4 bytes)
        double = double-precision decimal number (8 bytes)
        char = single character (1 byte)
        char[] = array of characters (size varies)
        bool = true or false (1 byte, requires <stdbool.h>)
    */
    int age = 25;
    int year = 2025;
    int quantity = 2;

    // printf("you are %d years old\n", age);
    // printf("the year is %d\n", year);
    // printf("You have ordered %d x items\n", quantity);


    float gpa = 2.5;
    float price = 19.99;
    // printf("Your GPA is a fomat specifiers so %f\n", gpa);
    // printf("Your prince is %f", price);


    // doubles that store 15-16 digits after the decimal
    double pi = 3.14159265358979;
    // printf("The vlaue of pi is %.15lf", pi);


    //character 
    char grade = 'A';
    // printf("Your grade is %c\n", grade);

    // array
    char name[] = "ben stokes";
    char email[] = "fakemail@gmail.com";
    // printf("Hello %s\n", name);
    // printf("this is my new email %s\n", email);

    bool isOnline = true;
    // printf("Is Online %d\n", isOnline);

    if(isOnline){
        printf("You are online");
    } else {
        printf("You are offline");
    }


    return 0;
}