/**
 * leet -
 * @str:
 * Description:
 * Return:
 */
char *leet(char *str)
{
	int i, j;
	
	for(i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; str[i] == 'a' || str[i] || 'A')
		{
			str[i] = 4;
		}
		for(j = 0; str[i] == 'e' || str[i] || 'E')
		{
			str[i] = 3;
		}
		for(j = 0; str[i] == 'o' || str[i] || 'O')
		{
			str[i] = 0;
		}
		for(j = 0; str[i] == 't' || str[i] || 'T')
		{
			str[i] = 7;
		}
		for(j = 0; str[i] == 'l' || str[i] || 'L')
		{
			str[i] = 1;
		}
	}
	return (str);
			
}
