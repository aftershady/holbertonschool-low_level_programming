/**
 * _strspn - count similars char
 * @s: first string
 * @accept: second string
 * Description: check similar char between 2 string
 * Return: counter of similarities
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int counter = 0;

for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == accept[i])
{
counter++;
break;
}
}
j = 0;
}
counter++;
return (counter);
}