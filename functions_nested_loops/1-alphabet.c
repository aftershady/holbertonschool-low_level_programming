#include <unistd.h>
#include "main.h"
/**
*main - return 0
*Description: 'display char from a to z'
*
*_putchar - writes the character c to stdout
*Return: On success 1.
*/
void print_alphabet(void)
{
int i = 0;
int c = 97;
while (i != 27)
{
_putchar(c);
c++;
i++;
}
}

int main(void)
{
print_alphabet();
return (0);
}
