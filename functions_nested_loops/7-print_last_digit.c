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
int ln = 0;
if (n < 0)
{
ln = (n * -1) % 10;
return (ln);
}
else
{
ln = '0' + (n % 10);
_putchar(ln);
return(n);
}
}
