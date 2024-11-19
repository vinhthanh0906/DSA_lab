#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {

    struct ComplexNumber {
        double real;
        double img;
    };

    struct ComplexNumber c1, c2, c3;


    printf("\nEnter two complex numbers (x + iy):");
    printf("\n-----------------------------------\n");
    printf("Real part of the first number: ");
    scanf("%lf", &c1.real);

    printf("Imaginary part of the first number: ");
    scanf("%lf", &c1.img);

    printf("Real part of the second number: ");
    scanf("%lf", &c2.real);

    printf("Imaginary part of the second number: ");
    scanf("%lf", &c2.img);

    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;

    printf("Result: %.2lf + %.2lfi\n", c3.real, c3.img);

    getch();
}
