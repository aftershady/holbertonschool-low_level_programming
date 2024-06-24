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
	int i;
	char space = '\n';
	char under = '\\';
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (n > 1)
			{
				_putchar(under);
			}
			else
			{
				while (i < n)
				{	
				_putchar(space);
				_putchar(under);
				}
			}
		}
		else if (n == 0 || n < 0)
		{
			_putchar(space);
		}
	}
}
