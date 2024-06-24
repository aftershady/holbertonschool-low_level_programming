#include <unistd.h>
#include "main.h"
/**
 * print_numbers - putchar numbers
 * Description: printf numbers from 0 to 9
 * Return: void
 */
void print_numbers(void);
{
	for (char i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
}
