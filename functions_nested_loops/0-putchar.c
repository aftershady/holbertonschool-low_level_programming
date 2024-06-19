#include <unistd.h>
/**
*main - return 0
*_putchar - writes the character c to stdout
*@c: The character to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int i = 0;
	char c = '_';

	_putchar(c);
	c = 'p';
	_putchar(c);
	c = 'u';
	_putchar(c);
	c = 't';
	_putchar(c);
	c = 'c';
	_putchar(c);
	c = 'h';
	_putchar(c);
	c = 'a';
	_putchar(c);
	c = 'r';
	_putchar(c);
	c = '\n';
	_putchar(c);
	return (0);
}
