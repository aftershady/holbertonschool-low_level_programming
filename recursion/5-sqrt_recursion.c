/**
 * _sqrt_recursion - search the natural square root of n
 * @n: number
 * Description: the calculate function multiply x by x until x is the natural
 * square root of n
 * Return:
 */
static int calculate(int n, int x);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculate(n, 1));
}

static int calculate(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return calculate(n, x + 1);
}


