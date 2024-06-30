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

comp = s1[i] - s2[i];

return (comp);
}
