/**
 * cap_string
 * @str:
 * Description:
 * Return:
 */
char *cap_string(char *str)
{
	int i, j, size;

	for (size = 0; str[size] != '\0'; size++)
	{}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == 'a' + j)
			{
				if (str[j-1] == '.' ||  str[j-1] == ';' ||  str[j-1] == ' ' || str[j-1] == '!')
				{
        				str[i] = 'A' + j;
				}
			}
		}
		j = 0;
	}
	return (str);
}
