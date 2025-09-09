
#include <stdio.h>
#include <string.h>
void happyBirthday(char name[], int age) {
    printf("\nHappy birthday %s and you are %d!", name, age);
}

int main() {

    char name[50] = "";
    int age = 25;

    printf(" Please Enter Your name:");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    happyBirthday(name, age);

    return 0;
}
