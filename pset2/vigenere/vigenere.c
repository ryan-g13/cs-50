#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]) {
    if (argc > 2 || argc < 2) {
        printf("Incorrect number of arguments. Please only enter 2 args in CLI");
        return 1;
    } else {
        for (int i = 0; i < strlen(argv[1]); i++) {
            if (!isalpha(argv[1][i])) {
                printf("Please provide a keyword as the second argument which is alphabetical.");
                return 1;
            }
        }

        string keyword = argv[1];
        string plainText = get_string("plaintext: ");
        char cipherText[30] = "";
        int keyLength = strlen(keyword);
        int plainLength = strlen(plainText);
        int keyChar = keyword[0];
        for (int i = 0, k = 0; i < plainLength; i++) {
            if (!isalpha(plainText[i])) {
                cipherText[i] = plainText[i];
            } else if (isupper(plainText[i])) {
                if (isupper(keyword[k%keyLength])) {
                    keyChar = (int)keyword[k%keyLength] - 65;
                } else {
                    keyChar = (int)keyword[k%keyLength] - 97;
                }
                int c = (int)plainText[i] - 65;
                int converted = (c + keyChar) % 26;
                converted = converted + 65;
                char temp = (char)converted;
                cipherText[i] = temp;
                k++;
                // ascii starts at 65 for caps, A = 0 using mod 26 to wrap things around and ensure still upper.
            }
        else {
            if (isupper(keyword[k%keyLength])) {
                keyChar = (int)keyword[k%keyLength] - 65;
            } else {
                keyChar = (int)keyword[k%keyLength] - 97;
            }
            int c = (int)plainText[i] - 97;
            int converted = (c + keyChar) % 26;
            converted = converted + 97;
            char temp = (char)converted;
            cipherText[i] = temp;
            k++;
            // ascii starts at 97 for lower, a = 0 using mod 26 to wrap things around and ensure still lower.
            }
        }
        printf("ciphertext: %s\n", cipherText);
        return 0;
    }
}