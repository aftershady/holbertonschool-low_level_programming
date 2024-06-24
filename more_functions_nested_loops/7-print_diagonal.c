#include <unistd.h>
#include "main.h"
/**
 * print_diagonal - print diag of \
 * @n:  number of \
 * Description: print diag of \ with n spaces
 * Return: n
 */
void print_diagonal(int n)
{
	int row = 0;
	if (n > 0)
	{
		while (row <= n)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

	}
	else
	{
		_putchar('\n');
	}
}
