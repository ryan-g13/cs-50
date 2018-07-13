#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]) {
    if (argc > 2 || argc < 2) {
        printf("You have tried to run the program with either too many or too few arguments. Please use only 1 non-negative integer.");
        return 1; //too many or few arguments test.
    }
    int k = atoi(argv[1]);
    string plainText = get_string("plaintext: ");
    int length = strlen(plainText);
    char cypherText[60] = "";
    for (int i = 0; i < length; i++) {
        if (!isalpha(plainText[i])) {
            cypherText[i] = plainText[i];
        } else if (isupper(plainText[i])) {
            int c = (int)plainText[i] - 65;
            int converted = (c + k) % 26;
            converted = converted + 65;
            char temp = (char)converted;
            cypherText[i] = temp;
            // ascii starts at 65 for caps, A = 0 using mod 26 to wrap things around and ensure still upper.
        }
        else {
            int c = (int)plainText[i] - 97;
            int converted = (c + k) % 26;
            converted = converted + 97;
            char temp = (char)converted;
            cypherText[i] = temp;
            // ascii starts at 97 for lower, a = 0 using mod 26 to wrap things around and ensure still lower.
            }
        }
    printf("cyphertext: %s\n", cypherText);
    return 0;
}