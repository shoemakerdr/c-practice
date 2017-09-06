/*
 * Write and execute a C program that calculates and displays the circumference of a
 * circle that has a radius 2.57 inches. The relevant formula is circumference = (2 pi) radius,
 * where pi is the value 3.1416. Use the variable names radius and circumference in your
 * program.
 */

#include <stdio.h>

#define PI 3.1416f

int main ()
{
    float radius = 2.57;
    float circumference = (2 * PI) * radius;

    printf("The circumference of a circle with radius %.2f is %.2f\n", radius, circumference);
    return 0;
}
