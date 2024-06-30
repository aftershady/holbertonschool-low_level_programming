/**
 * _strcmp
 * @s1:
 * @s2:
 * Description:
 * Return:
 */
int _strcmp(char *s1, char *s2)
{
int i, j, counter_s1, counter_s2, comp;

for(i = 0, counter_s1 = 0; s1[i] != '\0'; i++)
{
counter_s1 += s1[i];
}
for(j = 0, counter_s2 = 0; s2[j] != '\0'; j++)
{
counter_s2 += s2[i];
}
comp = counter_s1 - counter_s2;

return (comp);
}
