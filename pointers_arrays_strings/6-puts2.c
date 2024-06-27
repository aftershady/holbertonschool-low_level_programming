#include "main.h"
/**
 * rev_string - reverse string
 * Description: reverse a string with temp file
 * @s: string
 * Return: 0
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
		if (str[i] != '\0')
		{
			i++;
		}
	}
	_putchar('\n');	
}
