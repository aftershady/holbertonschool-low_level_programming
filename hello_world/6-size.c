/**
*main - return nothing
*Description: 'return the size of various initializer'
*Return: 0
*/
#include <stdio.h>
int main(void)
{
printf("Size of a char: %li byte(s)\n", sizeof(char));
printf("Size of a int: %li byte(s)", sizeof(int));
printf("Size of a long int: %li byte(s)", sizeof(long));
printf("Size of a long long int: %li byte(s)", sizeof(long long));
printf("Size of a float: %li byte(s)", sizeof(float));
}
