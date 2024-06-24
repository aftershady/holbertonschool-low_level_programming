#include <unistd.h>
#include "main.h"
/**
 * print_numbers - putchar numbers
 * Description: printf numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

