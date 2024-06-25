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
	int i, j, k, l = 0;

	for (i = size; size > 0; size--)
	{
		for (j = size - 1; j > 0; j--)
		{
			putchar('n');
		}
		for(k = 0 ; k <= l; k++)
		{
			putchar('#');
		}
		k = 0;
		l++;
		putchar('\n');
	}
}
