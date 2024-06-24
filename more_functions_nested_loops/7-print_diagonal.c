#include <unistd.h>
#include "main.h"
/**
 * print_diagonal -
 * @n:  number
 * Description:
 * Return: n
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
	for (int i = 0; i < n; i++)
	{
		_putchar('\');
		_putchar('\n');
	}
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
