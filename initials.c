#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string fullName = get_string("Proper Name: ");
    char initials[4];
    int counter = 0;
    for (int i = 0; i < strlen(fullName); i++)
    {
        if (isupper(fullName[i]))
        {
            initials[counter] = fullName[i];
            counter++;
        }
    }
    initials[counter] = '\0';
    printf("%s\n", initials);
}