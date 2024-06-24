#include <unistd.h>
#include "main.h"
/**
 * print_square - square of #
 * Description: square of # with x rows and cols
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else 
	{
		_putchar('\n');
	}
}
