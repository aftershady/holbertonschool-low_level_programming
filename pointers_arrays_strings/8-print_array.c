#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half of string
 * Description: print the half of a sting strating by the middle
 * @str: string
 * Return: 0
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i] != a[n])
	{
		printf("%d", a[i]);
		i++;
		if (a[i] != a[n])
		{
			printf(", ");
		}
	}
}
