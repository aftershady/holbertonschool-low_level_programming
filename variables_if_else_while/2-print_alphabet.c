/**
*main - return 0
*Description: ''
*Return: 0
*/
#include <stdio.h>

int main(void)
{
char alphabet = 'a';
char lr = '\n';
for(int i =0; i!=26; i++)
{
	putchar(alphabet);
	putchar(lr);
	alphabet++;
}
return 0;
}

