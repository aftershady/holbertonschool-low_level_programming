/**
 * _strncpy -
 * @dest:
 * @src:
 * @n:
 * Description:
 * Return:
 */
char *_strncpy(char *dest, char *src, int n)
{
int src_size = 0;
int dest_size = 0;
int i = 0;

/*size of src*/
while (src[src_size] != '\0')
{
	src_size++;
}
/*size of dest*/
while (dest[dest_size] != '\0')
{
	dest_size++;
}
/*strcpy*/
while (i != dest_size)
{
	if(i >= n)
	{
		dest[i] = '-';
	}
	else if (src_size == 0)
	{
		dest[i] = null;
	}
	else
	{
		dest[i] = src[i];
	}
	i++;
}
dest[i] = '\0'; 
return (dest); 
}
