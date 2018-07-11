#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int sigma(int m);

int main(void)
{
    int n;
    do
    {
        n = get_int("Please provide a positive integer: ");
    } while (n < 1);
    int answer = sigma(n);
    printf("%i\n", answer);
}

int sigma(m)
{
    if(m <= 0) {
        return 0;
    }
    else {
        return (m + (sigma(m - 1)));
    }
}