#include <stdio.h>

double cirarea(double r);
double ano(double);

int main()
{
    double rad = 1.0, area = 0.0;
    printf("Testing\n");
    printf("Area of circle\n\n");
    printf("radius Area \n"
           "----------------------------------\n");
    area = cirarea(rad);
    printf("%10.1f %10.2f\n", rad, area);
    rad = 5.0;
    area = cirarea(rad);
    printf("%10.1f %10.2f\n", rad, area);
    double per = 0.0;
    per = ano(per);
    printf("Perimeter\n");
    printf("%10.1f\n", per);
    return 0;
}

double ano(double)
{
    const double l = 5;
    const double b = 10;
    return l * b;
}

double cirarea(double r)
{
    const double pi = 3.14159;
    return pi * r * r;
}
