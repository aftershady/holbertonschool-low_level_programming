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
int a = n % 10;
if (a < 0)
{
return (a * -1);
}
putchar('0' + a);
}
