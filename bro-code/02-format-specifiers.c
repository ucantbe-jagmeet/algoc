#include <stdio.h>
#include <stdbool.h>

int main(){

    // Format Specifiers = Special tokens that begin with a % symbol,
    //              followed by a character that specifies the data type and optional modifiers ( width, precision, flags). they control how data is displayed or interpreted.

    int age = 25;
    float price= 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Jagmeet singh";

    // printf("%d\n", age);
    // printf("%f\n", price);
    // printf("%lf\n", pi);
    // printf("%c\n", currency);
    // printf("%s\n", name);


    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    // printf("%d\n", num1);
    // printf("%d\n", num2);
    // printf("%d\n", num3);

    // printf("%04d\n", num1);
    // printf("%04d\n", num2);
    // printf("%04d\n", num3);

    // num3 = -100;
    
    // printf("%+d\n", num1);
    // printf("%+d\n", num2);
    // printf("%+d\n", num3);


    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;


    printf("%.4f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

    // width precision flags
    printf("%7.4f\n", price1);
    printf("%7.4f\n", price2);
    printf("%7.4f\n", price3);



    return 0;
}