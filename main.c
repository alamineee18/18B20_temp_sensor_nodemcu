#include <stdio.h>

struct complex
{
    double real;
    double img;
}complex;

struct complex add(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return (c3);
}

struct complex product(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real*c2.real - c1.img*c2.img;
    c3.img = c1.real*c2.real + c1.img*c2.img;
    return (c3);
}

int main()
{
    struct complex number1, number2, sum, mul;

    printf("Enter a complex number: ");
    scanf("%lf %lf", &number1.real, &number1.img);
    printf("Enter another complex number: ");
    scanf("%lf %lf", &number2.real, &number2.img);

    sum = add(number1, number2);
    mul = product(number1, number2);

    printf("Sum = %lf and Product = %lf", sum, mul);

}
