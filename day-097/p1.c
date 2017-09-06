/*
 * Write a C function that reverses the characters in a string. (Hint: this can
 * be considered as a string copy starting from the back end of the first string.)
 *
 */

#include <stdio.h>
#include <stdlib.h>

void getString (char * buffer, int size);
void reverseString (char * buffer, int size);

int main ()
{
    int bufferSize = 256;
    char * string = malloc(sizeof(char) * bufferSize);
    
    getString(string, bufferSize);
    reverseString(string, bufferSize);
    printf("%s\n", string);
    return 0;
}

void getString (char * buffer, int size)
{
    int i = 0;
    while (i < size - 1 && (buffer[i++] = getchar()) != '\n');
    buffer[i - 1] = '\0';
}

void reverseString (char * buffer, int size)
{
    int end = 0;
    int i;

    while (end < size - 1 && buffer[end++] != '\0');
    end -= 2;


    char temp = '\0';

    for (i = 0; i < end; i++)
    {
        temp = buffer[i];
        buffer[i] = buffer[end];
        buffer[end] = temp;
        end--;
    }

}
