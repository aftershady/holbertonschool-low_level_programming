#include <unistd.h>
#include "main.h"

/**
*_isalpha - capital checker
*@c: letter
*Description: if you letter is captial or lower case return 1
*Return: 1 if capital or lowar case or 0
*/
int print_sign(int n)
{
if (n%n == 0 && n > 0)
{
putchar('+');
return (1);
}
else if (n%n == 0)
{
	putchar('0');
	return (0);
}
else 
{
	putchar('-');
	return (-1);
}


return (0);
}
