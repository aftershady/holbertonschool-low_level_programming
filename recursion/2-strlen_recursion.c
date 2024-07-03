#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - return size of string
 * @s: string
 * Description: stack size of string in size with recursion
 * Return: size
 */
int _strlen_recursion(char *s)
{
	static int size;

	if (*s == '\0')
	{
		return (size);
		printf("size dans if %d\n", size);
	}
	else
	{
		size++;
		printf("size dans else %d\n", size);
		_strlen_recursion(s + 1);
	}
	return (size);

}
