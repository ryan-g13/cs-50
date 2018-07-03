#include <stdio.h>
#include <cs50.h>

int main(void)
{
 int n;
 do
 {
    n = get_int("Positive number of objects to create: ");
 }
 while (n <= 0);

 for (int i = 0; i < n; i++) {
     printf("?"); // for vertical just add escape char here and delete from below.
 }
 printf("\n");
}