#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float userInput = get_float("Please provide the amount of change required: ");
    while( userInput < 0.00 ) {
        userInput = get_float("Please provide a non-negative value for change required: ");
    }
    int coinCount = 0;
    userInput = userInput * 100.0;
    userInput = round(userInput);
    if ( userInput / 25) {
        int temp = userInput / 25;
        coinCount += temp;
        userInput = userInput - (temp * 25);
    } if (userInput / 10) {
        int temp = userInput / 10;
        coinCount += temp;
        userInput = userInput - (temp * 10);
    } if (userInput / 5) {
        int temp = userInput / 5;
        coinCount += temp;
        userInput = userInput - (temp * 5);
    } if (userInput / 1) {
        int temp = userInput / 1;
        coinCount += temp;
        userInput = userInput - (temp * 1);
    }
    printf("%i\n", coinCount);
}
