/**
*main - return nothing
*Description: 'return the size of various initializer'
*Return: 0
*/
#include <stdio.h>
int main(void)
{
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of a int: %lu byte(s)", sizeof(int));
printf("Size of a long: %lu byte(s)", sizeof(long));
printf("Size of a long long: %lu byte(s)", sizeof(long long));
printf("Size of a float: %lu byte(s)", sizeof(float));
}
