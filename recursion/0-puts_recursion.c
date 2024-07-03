#include "main.h"
/**
 * _puts_recursion - print string with recursion
 * @s: string
 * Description: print string with putchar and a recursion loop
 * Return: nothing
 */
void _puts_recursion(char *s)
{
_putchar(*s);
if (*s == '\0')
{
	_putchar('\n');
}
else
{
s++;
_puts_recursion(s);
}
}
