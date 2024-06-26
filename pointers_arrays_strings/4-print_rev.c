#include "main.h"
/**
 * _puts - display a string
 * Description: take a string on in and display it with new line at the end
 * @str: string
 * Return: 0;
*/
void print_rev(char *s)
{
	int size = 0;
	while(s[size] != '\0')
	{
		size++;
	}
	size--;
	while(size >= 0)
	{
		_putchar(s[size]);
		size--;
	}
	putchar('\n');
}
