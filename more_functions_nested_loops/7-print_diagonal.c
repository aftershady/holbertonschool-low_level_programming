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
	int i = 0;
	int cols = 0;
	int row = 0;
	while (cols <= n)
	{
		row = 0;

		if (n > 0)
		{
			while (i <= cols)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			row++;
		}
		else
		{
			_putchar('\n');
		}
		cols++;
	}
}
