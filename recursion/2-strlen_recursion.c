#include "main.h"
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
	}
	else
	{
		size++;
		_strlen_recursion(s + 1);
	}
	return (size);

}
