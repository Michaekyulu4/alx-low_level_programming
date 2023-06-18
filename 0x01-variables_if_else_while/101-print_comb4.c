#include <stdio.h>
/**
 * main - Entry point
 * Description: Total 2 digit combination
 * Return: 0(success)
 */
int main(void)
{
	int n, m, a;

	for (n = '0'; n < '9'; n++)
	{

	for (m = n + 1; m <= '9'; m++)
	{

	for (a = m + 1; a <= '9'; a++)
	{
		if ((n != m) != a)
		{
		putchar(n);
		putchar(m);
		putchar(a);
		if (n == '7' && m == '8')
		continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
