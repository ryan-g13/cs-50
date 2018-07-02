#include <stdio.h>
#include <cs50.h>

int main(void) {
 int x = get_int("X value: ");
 int y = get_int("Y value: ");

 printf("%i plus %i equals %i \n", x, y, x + y);
 printf("%i minus %i equals %i \n", x, y, x - y);
 printf("%i multiplied by %i equals %i \n", x, y, x * y);
 //printf("%f divided by %f equals %f", x, y, x / y);
 printf("%i divided by %i has a remainder of %i \n", x, y, x % y);
}