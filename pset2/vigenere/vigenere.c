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
        printf("%s", keyword);
        string plainText = get_string("plaintext: ");
        printf("End of program %s", plainText);
        return 0;
    }
}