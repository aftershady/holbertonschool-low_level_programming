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

	for (i = 0; i < 10; i++)
	{
		for(j = 0; j <= 14; j++)
		{
			if (j < 9)
			{

				_putchar(j/10); 
			}
		_putchar(j%10);
		j++;
		}
		_putchar('\n');
	}	
}
