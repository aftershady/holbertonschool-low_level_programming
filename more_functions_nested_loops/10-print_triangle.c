#include <unistd.h>
#include "main.h"
/**
 * print_triangle - triangle rectancle of #
 * @size : size of triangle
 * Description: square of # with x rows and cols
 * Return: void
 */
void print_triangle(int size)
{
	int i = size
	int j, k, l = 0;

	for (i; i > 0; i--)
	{
		for (j = size - 1; j > 0; j--)
		{
			_putchar('n');
		}
		for(k = 0 ; k <= l; k++)
		{
			_putchar('#');
		}
		k = 0;
		l++;
		_putchar('\n');
	}
}
