/**
 * calculate - help the _squtr recursion function
 * @n: number
 * @x: calculate square root
 * Description: determine the natural square root of n
 * Return: n, (x * x) incrementred
 */
static int calculate(int n, int x)
{
	if (x * x > n)
		return (n);
	if (x * x == n)
		return (x);
	return (calculate(n, x + 1));
}
/**
 * _sqrt_recursion - search the natural square root of n
 * @n: number
 * Description: the calculate function multiply x by x until x is the natural
 * square root of n
 * Return: x of calculate function or 0 or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (calculate(n, 1));
}


