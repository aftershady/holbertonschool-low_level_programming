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
int size = 0;
int i = 0;

while (src[size] != '\0')
{
size++;
}
while (i != size || i < n)
{
dest[i] = src[i]; 
i++;
}
dest[i] = '\0'; 
return (dest); 

}
