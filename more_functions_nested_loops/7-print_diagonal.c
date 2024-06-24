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
	int col;
	int row = 0;
	if (n > 0)
	{
		if (n > 0)
		{
			for (col = 0; col < n; col++)
			{
				while (row <= n)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}
	}
}
