#include <unistd.h>
#include "main.h"
/**
 * more_numbers - 
 * Description: 
 * Return: void
 */
void more_numbers(void)
{
        int i = 0;
	int j = 0;
	char dixaine = '1';
	char unite = '0';

	for (i = 0; i < 10; i++)
	{
		for(j = 0; j <= 14; j++)
		{
			if (j < 9)
			{

				_putchar(dixaine); 
				unite = '0';
			}
		_putchar(unite);
		unite++;
		}
		_putchar('\n');
	}	
}
