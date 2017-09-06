/*
 * Write and execute a C program that calculates and display that area of
 * a rectangle that has a width of 3.5 inches and a length of 5.48 inches.
 * The relevant formula is area = length * width. Use the variable names
 * length, width, and area in your program.
 * 
 * Additional! 
 * The program must also compute and display the perimeter of the rectangle.
 * The relevant formula is perimeter = 2(length + width).
 */

#include <stdio.h>

int main ()
{
    float width = 3.5;
    float length = 5.48;
    float area = width * length;
    float perimeter = 2 * (length + width);

    printf("The area of the rectangle that is 3.5 x 5.48 is %.2f\n", area);
    printf("The perimeter of the rectangle that is 3.5 x 5.48 is %.2f\n", perimeter);
    return 0;
}
