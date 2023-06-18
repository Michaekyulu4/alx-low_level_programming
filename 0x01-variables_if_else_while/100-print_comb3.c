#include <stdio.h>
/**
 * main - Entry point
 * Description: Total 2 digit combination
 * Return: 0(success)
 */
int main(void)
{
	int n, m;

	for (n = '0'; n < '9'; n++)
	{

	for (m = n + 1; m <= '9'; m++)
	{
		if (n != m)
		{
		putchar(n);
		putchar(m);
		if (n == '8' && m == '9')
		continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
