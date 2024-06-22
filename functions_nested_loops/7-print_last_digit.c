#include <unistd.h>
#include "main.h"
/**
*print_last_digit - print number
*@n: number
*Description: return the last number of a number
*Return: last number
*/
int print_last_digit(int n)
{
int ln;
if (ln < 0)
{
ln = (n * -1) % 10;

return (ln);
}
_putchar(('0' + (n % 10));
}
