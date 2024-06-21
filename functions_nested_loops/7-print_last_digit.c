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
if (n > 0)
{
return (n % 10);
}
else
{
return ((n * -1) % 10);
}
}
