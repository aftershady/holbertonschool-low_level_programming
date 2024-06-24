#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
int i = 0;
while (i<=26)
{
if (c == 'a' + i)
{
	c = 0;
	return (c);
}
else if (c == 'A' + i)
{
	c = 1;
	return (c);
}
else
{
i++;
return 2;
}
}
}
