/*
 * Write and execute a C program that calculates and display the area of a circle
 * with a radius of 2.57 inches. The relevant formula is area = pi * radius^2,
 * where pi is the value 3.1416. Use the variable names radius and area in 
 * your program.
 */

#include <stdio.h>

#define PI 3.1416f

int main ()
{
    float radius = 2.57;
    float area = PI * (radius * radius);
    printf("The area of a circle with a radius of %.2f is %.2f\n", radius, area);
    return 0;
}
