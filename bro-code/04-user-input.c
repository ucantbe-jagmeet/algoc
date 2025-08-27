#include <stdio.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // null terminator character
    char name[30] = ""; 
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("age is %d\n", age);
    printf("gpa is %f\n", gpa);
    printf("grade is %c\n", grade);
    printf("name is %s\n", name);

    return 0;
}