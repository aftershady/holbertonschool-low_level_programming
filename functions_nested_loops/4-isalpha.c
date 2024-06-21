#include <unistd.h>
#include "main.h"

/**
*_isalpha - capital checker
i
*@c: letter
*Description: check if your letter is a capital or not
*Return: 0 if capital 1 if not
*/
int _isalpha(int c)
{
int i = 0;
int j = 0;
while (i <= 25)
{
        if (c == 'a' + i || c == 'A')
        {
        return (1);
        }
        i++;
}
return (0);
}
