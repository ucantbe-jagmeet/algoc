#include <stdio.h>
#include <stdbool.h>  
#include <string.h>  

typedef int Number;
typedef char String[50];

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

int main() {
    Student student1 = {"Spongebob", 30, 9.5, true};
    strcpy(student1.name, " sandy");

    Number num = 20;
    String strName = "Jagmeet Singh";

    printf("Number %d\n", num);
    printf("str %s\n", strName);

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("Full Time: %s\n", student1.isFullTime ? "Yes" : "No");

    return 0;
}