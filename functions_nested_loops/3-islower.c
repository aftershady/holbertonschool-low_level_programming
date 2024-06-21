#include <unistd.h>
#include "main.h"

/**
*print_alphabet_x10 - Print the alphabet x10
*Description: This function prints the alphabet in lowercase 10 times.
*Return: void
*/
int _islower(int c)
{
int i = 0;
while (c != "z")
{
	if(c == 'a'+i)
	{
	return 1;
	}
	i++;
}
return 0;
}
~   
