#include <stdio.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // null terminator character
    char name[30] = ""; 
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your FirstName: ");
    scanf("%s", &name);

    printf("age is %d\n", age);
    printf("gpa is %.2f\n", gpa);
    printf("grade is %c\n", grade);
    printf("name is %s\n", name);

    return 0;
}