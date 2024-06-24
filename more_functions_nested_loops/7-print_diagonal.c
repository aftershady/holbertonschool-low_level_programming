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
	int cols = 0;
	int row = 0;
	while (cols <= n)
	{
		if (n > 0)
		{
			while (row <= n)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
