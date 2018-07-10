#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h = get_int("Hello, please provide a positive number under 23: ");
    while ( h < 0 || h > 23) {
        h = get_int("The previous number was outside the range of 1 to 23. Please provide a new number: ");
    }
    for (int i = 0; i < h; i++) {
        for (int j = h; j > i + 1; j--) {
            printf(" ");
        }
        for (int k = 0; k < i + 2; k++) {
        printf("#");
        }
        printf("\n");
    }
}