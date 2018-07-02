#include <stdio.h>
#include <cs50.h>

int main(void) {
 char c = get_char("input answer to check: ");

 switch(c)
 {
     case 'Y':
     case 'y':
     printf("yes \n");
     break;
     case 'N':
     case 'n':
     printf("no \n");
     break;
 }
}