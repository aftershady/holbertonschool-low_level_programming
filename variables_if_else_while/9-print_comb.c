/**
*main - return 0
*Description: 'display numbers from 0 to 9'
*Return: 0
*/
#include <stdio.h>
int main(void)
{
int i = 0;
int c = 48;
while (i != 11)
{
putchar(c);
if (i == 9)
{
putchar(36);
}
else if (i < 9)
{
putchar(',');
putchar(' ');
c++;
}
i++;
}
return (0);
}
