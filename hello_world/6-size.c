/**
*main - return nothing
*Description: 'return the size of various initializer'
*Return: 0
*/
#include <stdio.h>
int main(void)
{
char c;
int i;
long l;
long long ll;
float f;
printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of a int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(l));
printf("Size of a long long int: %ld byte(s)\n", sizeof(ll));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
}
