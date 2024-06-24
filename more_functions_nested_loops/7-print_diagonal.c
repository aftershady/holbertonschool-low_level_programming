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
	int i, j;

	for(i = 0; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
