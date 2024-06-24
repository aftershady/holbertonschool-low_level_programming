/**
 * main - display 1 to 100
 * Description: display 1 to 10 with x5 = buzz & x3 = fizz
 * Return: 0
*/
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i%3 == 0)
		{
			printf("fizz ");
		}
		else if (i%5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
