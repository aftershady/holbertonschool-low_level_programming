/**
 * _strcmp
 * @s1:
 * @s2:
 * Description:
 * Return:
 */
int _strcmp(char *s1, char *s2)
{
int i, comp;

for(i = 0; s1[i] == s2[i]; i++)
{
	if (s1 = '\0')
	{
		return (0);
	}
}
if (s1[i] != s2[1])
{
comp = s1[i] - s2[i];
}

return (comp);
}
