#include <cs50.h>
#include <stdio.h>

int main(void) {
    string s = get_string("Input String: ");
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }
    printf("%i\n");
}