#include <unistd.h>
#include "main.h"

/**
*print_alphabet_x10 - Print the alphabet x10
*Description: This function prints the alphabet in lowercase 10 times.
*Return: void
*/
void print_alphabet_x10(void)
{
int i = 0;
int j = 0;
int c = 97;
while (j <= 9)
{
while (i != 26)
{
_putchar(c);
c++;
i++;
if (i == 26)
{
_putchar('\n');
c = 0;
j++;
}
}
}
}
