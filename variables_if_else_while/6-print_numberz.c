/**
*main - return 0
*Description: 'display numbers from 0 to 9'
*Return: 0
*/
#include <stdio.h>
int main(void)
{
char c = '0';
int i = 0;
while (i != 10)
{
putchar(c);
c++;
i++;
}
printf("\n");
return (0);
}
