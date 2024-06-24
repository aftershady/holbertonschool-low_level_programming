#include <unistd.h>
#include "main.h"
/**
 * more_numbers - 
 * Description: 
 * Return: void
 */
void more_numbers(void)
{
        int i, j;
	int dixaine = 49;
	int unit = 48;
	for (i = 0; i < 10; i++)
	{
		for(j = 0; j <= 14; j++)
		{
			if (j < 9)
			{

				_putchar(dixaine); 
				unit = 0;
			}
		_putchar(unit);
		unit++;
		}
		_putchar('\n');
	}	
}
