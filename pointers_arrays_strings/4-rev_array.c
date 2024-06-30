/*
 * reverse_array - 
 * @a:
 * @n:
 * Description:
 * Return:
 */
void reverse_array(int *a, int n)
{
int i, j, t;

for (i = 0, j = n - 1; i < j; i++, j--)
{
t = a[j];
a[j] = a[i]; 
a[i] = t;
}
return (a);
}
