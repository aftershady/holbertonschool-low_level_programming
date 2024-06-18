/**
*main - return 0
*Description: 'display numbers from 0 to 9'
*Return: 0
*/
#include <stdio.h>
int main(void)
{
int i = 0;
while (i != 10)
{
putchar('0' + i);
putchar(',');
putchar(' ');
i++;
if(i=9)
{
',' = '$';
}
}
putchar('\n');
return (0);
}
