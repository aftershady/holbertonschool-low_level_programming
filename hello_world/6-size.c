/**
*main - return nothing
*Description: ''
*Return: 0
*/
#include <stdio.h>
int main(void)
{
char _char;
int _int;
long _long;
long long _llong;
float _float;
printf("%zu", sizeof(_char));
printf("%zu", sizeof(_int));
printf("%zu", sizeof(_long));
printf("%zu", sizeof(_llong));
printf("%zu", sizeof(_float));
}
