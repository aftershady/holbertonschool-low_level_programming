#include <unistd.h>
#include "main.h"
/**
 * more_numbers - 
 * Description: 
 * Return: void
 */
void more_numbers(void)
{
        int i = 0;
	int j = 0;
	int l = 0;

	for (i = 0; i < 14; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 10)
			{
				l++;
			}
			if (l > 0)
			{
				_putchar(l + '0');
			}
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
