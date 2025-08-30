#include <stdio.h>
#include <string.h>

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

    getchar();
    // check what happened when we log name before other variables

    printf("Enter your Full name: ");
    // scanf("%s", &name);
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("name is %s\n", name); 
    printf("age is %d\n", age);
    printf("gpa is %.2f\n", gpa);
    printf("grade is %c\n", grade);

    return 0;
}